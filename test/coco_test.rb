require "test_helper"

class CocoTest < Minitest::Test
  def test_that_it_has_a_version_number
    refute_nil ::Coco::VERSION
  end

  def test_it_has_magic_module
    assert ::Coco.const_defined?(:Magic)
  end
end
