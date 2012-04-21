#include <ruby.h>
#include <stdbool.h>

static VALUE array_sum(VALUE self) {
  long size = RARRAY_LEN(self);
  VALUE *array = RARRAY_PTR(self);
  double total = 0;
  int i;
  bool has_float = false;

  for (i = 0; i < size; i++) {
    VALUE item = array[i];

    switch (TYPE(item)) {
      case T_FIXNUM:
        total += FIX2INT(item);
        break;
      default:
        if (!has_float) {
          has_float = true;
        }

        total += NUM2DBL(item);
        break;
    }
  }

  if (has_float) {
    return rb_float_new(total);
  } else {
    return INT2NUM(total);
  }
}

void Init_native_array_sum() {
  VALUE mNativeArraySum = rb_define_module("NativeArraySum");
  rb_define_method(mNativeArraySum, "sum", array_sum, 0);
  rb_include_module(rb_cArray, mNativeArraySum);
}
