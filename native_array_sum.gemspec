# -*- encoding: utf-8 -*-
require File.expand_path('../lib/native_array_sum/version', __FILE__)

Gem::Specification.new do |gem|
  gem.authors       = ["Rodrigo Navarro"]
  gem.email         = ["rnavarro1@gmail.com"]
  gem.description   = %q{TODO: Write a gem description}
  gem.summary       = %q{TODO: Write a gem summary}
  gem.homepage      = ""

  gem.executables   = `git ls-files -- bin/*`.split("\n").map{ |f| File.basename(f) }
  gem.files         = `git ls-files`.split("\n")
  gem.test_files    = `git ls-files -- {test,spec,features}/*`.split("\n")
  gem.name          = "native_array_sum"
  gem.extensions    = ["ext/native_array_sum/extconf.rb"]
  gem.require_paths = ["lib", "ext"]
  gem.version       = NativeArraySum::VERSION

  gem.add_development_dependency "rspec"
  gem.add_development_dependency "rake-compiler"
end
