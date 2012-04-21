require "native_array_sum"

describe Array do
  describe "#sum" do
    context "with a float value" do
      subject { [1, 2.5, 3].sum }
      it { should == 6.5 }
    end

    context "without a float value" do
      subject { [1, 2, 3].sum }
      it { should == 6 }
      it { should be_instance_of Fixnum }
    end
  end
end
