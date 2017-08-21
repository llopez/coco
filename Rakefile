require "bundler/gem_tasks"
require "rake/testtask"
require 'rake/extensiontask'

spec = Gem::Specification.load('coco.gemspec')
Rake::ExtensionTask.new('coco', spec)

Rake::TestTask.new(:test) do |t|
  t.libs << "test"
  t.libs << "lib"
  t.test_files = FileList["test/**/*_test.rb"]
end

task :default => :test
