#!/usr/bin/env rake
require "bundler/gem_tasks"
require "rake/extensiontask"

Rake::ExtensionTask.new("native_array_sum") do |ext|
  ext.lib_dir = File.join "lib", "native_array_sum"
end

require "rspec"
require "rspec/core/rake_task"

RSpec::Core::RakeTask.new("spec")
Rake::Task[:spec].prerequisites << :compile

task :test => :spec
task :default => :test
