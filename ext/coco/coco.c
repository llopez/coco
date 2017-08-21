#include <ruby.h>
#include <stdio.h>

VALUE Coco = Qnil;
VALUE Magic = Qnil;

void Init_coco();
VALUE method_coco_magic_sum(VALUE self, VALUE a, VALUE b);

void Init_coco() {
  Coco = rb_define_module("Coco");
  Magic = rb_define_module_under(Coco, "Magic");
  rb_define_singleton_method(Magic, "sum", method_coco_magic_sum, 2);
}

VALUE method_coco_magic_sum(VALUE self, VALUE a, VALUE b) {
  a = NUM2INT(a);
  b = NUM2INT(b);
  return INT2NUM(a + b);
}