require "native_array_sum"

describe Array do
  describe "#sum" do
    subject { [1, 2.5, 3].sum }
    it { should == 6.5 }
  end
end
