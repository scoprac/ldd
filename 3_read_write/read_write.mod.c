#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x591299b, "module_layout" },
	{ 0x42defd9f, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x1b3ad94c, "class_destroy" },
	{ 0x2c854ece, "device_destroy" },
	{ 0xcbae9d32, "cdev_add" },
	{ 0x54a17075, "cdev_init" },
	{ 0x50556c83, "device_create" },
	{ 0x6488f5db, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdcb764ad, "memset" },
	{ 0x622f73ad, "cpu_hwcaps" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xb788fb30, "gic_pmr_sync" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x92997ed8, "_printk" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0EAF20A0FC90B277331AF9B");
