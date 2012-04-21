#include <ruby.h>

static VALUE array_sum(VALUE self) {
  long size = RARRAY_LEN(self);
  VALUE *array = RARRAY_PTR(self);
  double total = 0;
  int i;

  for (i = 0; i < size; i++) {
    VALUE item = array[i];

    switch (TYPE(item)) {
      case T_FIXNUM:
        total += FIX2INT(item);
        break;
      default:
        total += NUM2DBL(item);
        break;
    }
  }

  return rb_float_new(total);
}

void Init_native_array_sum() {
  VALUE mNativeArraySum = rb_define_module("NativeArraySum");
  rb_define_method(mNativeArraySum, "sum", array_sum, 0);
  rb_include_module(rb_cArray, mNativeArraySum);
}
