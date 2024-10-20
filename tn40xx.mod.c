#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

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



static const char ____versions[]
__used __section("__versions") =
	"\x1c\x00\x00\x00\xd0\x66\xc9\xc4"
	"alloc_etherdev_mqs\0\0"
	"\x1c\x00\x00\x00\xd7\x22\x7f\x58"
	"devmap_managed_key\0\0"
	"\x18\x00\x00\x00\xb6\x09\x61\x8b"
	"pci_save_state\0\0"
	"\x14\x00\x00\x00\x3b\x4a\x51\xc1"
	"free_irq\0\0\0\0"
	"\x18\x00\x00\x00\xce\xb0\x1d\xc3"
	"is_vmalloc_addr\0"
	"\x18\x00\x00\x00\xa4\xf3\x69\xda"
	"napi_gro_frags\0\0"
	"\x1c\x00\x00\x00\x9e\x04\x38\xd9"
	"pci_enable_device\0\0\0"
	"\x14\x00\x00\x00\xb6\x3e\x29\xd0"
	"consume_skb\0"
	"\x20\x00\x00\x00\x79\x76\x5f\x1f"
	"pci_alloc_irq_vectors\0\0\0"
	"\x20\x00\x00\x00\x81\xf8\x93\x53"
	"netif_napi_add_weight\0\0\0"
	"\x1c\x00\x00\x00\xad\x39\x6b\x92"
	"unregister_netdev\0\0\0"
	"\x18\x00\x00\x00\xcf\x61\x4e\x6f"
	"napi_get_frags\0\0"
	"\x20\x00\x00\x00\xa0\x57\xd9\x93"
	"dma_unmap_page_attrs\0\0\0\0"
	"\x20\x00\x00\x00\xf9\x79\x49\x79"
	"__pci_register_driver\0\0\0"
	"\x20\x00\x00\x00\xe4\x92\xe4\x88"
	"pci_prepare_to_sleep\0\0\0\0"
	"\x10\x00\x00\x00\x53\x39\xc0\xed"
	"iounmap\0"
	"\x18\x00\x00\x00\x02\xbd\x39\xac"
	"skb_add_rx_frag\0"
	"\x18\x00\x00\x00\xfc\x5b\xa1\x57"
	"pci_disable_msi\0"
	"\x1c\x00\x00\x00\xaf\x85\x3b\xc7"
	"pci_request_regions\0"
	"\x10\x00\x00\x00\x38\xdf\xac\x69"
	"memcpy\0\0"
	"\x28\x00\x00\x00\xfc\x24\x7b\x2b"
	"__put_devmap_managed_page_refs\0\0"
	"\x1c\x00\x00\x00\x48\x88\xcb\x77"
	"eth_validate_addr\0\0\0"
	"\x14\x00\x00\x00\x24\x10\xda\xbf"
	"netdev_warn\0"
	"\x1c\x00\x00\x00\x4b\x18\x29\xf8"
	"__dynamic_dev_dbg\0\0\0"
	"\x18\x00\x00\x00\xa7\x2c\xe0\x9e"
	"netif_tx_unlock\0"
	"\x18\x00\x00\x00\x64\xbd\x8f\xba"
	"_raw_spin_lock\0\0"
	"\x20\x00\x00\x00\x1b\x6e\x1a\xb0"
	"pci_unregister_driver\0\0\0"
	"\x18\x00\x00\x00\x8c\x89\xd4\xcb"
	"fortify_panic\0\0\0"
	"\x14\x00\x00\x00\x5c\xbf\x9a\xab"
	"netdev_err\0\0"
	"\x14\x00\x00\x00\xbb\x6d\xfb\xbd"
	"__fentry__\0\0"
	"\x1c\x00\x00\x00\xbc\x29\x06\x3e"
	"dev_driver_string\0\0\0"
	"\x18\x00\x00\x00\xe7\x96\xa0\x09"
	"dev_addr_mod\0\0\0\0"
	"\x24\x00\x00\x00\x97\x70\x48\x65"
	"__x86_indirect_thunk_rax\0\0\0\0"
	"\x1c\x00\x00\x00\xba\xdf\x08\xd4"
	"dma_map_page_attrs\0\0"
	"\x1c\x00\x00\x00\x43\x66\xc6\x5b"
	"napi_complete_done\0\0"
	"\x10\x00\x00\x00\x7e\x3a\x2c\x12"
	"_printk\0"
	"\x1c\x00\x00\x00\xcb\xf6\xfd\xf0"
	"__stack_chk_fail\0\0\0\0"
	"\x18\x00\x00\x00\x58\x3a\xa8\x64"
	"__napi_schedule\0"
	"\x10\x00\x00\x00\x94\xb6\x16\xa9"
	"strnlen\0"
	"\x24\x00\x00\x00\x7c\xb2\x83\x63"
	"__x86_indirect_thunk_rdx\0\0\0\0"
	"\x18\x00\x00\x00\x00\x74\x7a\xe0"
	"__free_pages\0\0\0\0"
	"\x10\x00\x00\x00\x49\xb3\xa9\x40"
	"vzalloc\0"
	"\x14\x00\x00\x00\xe6\x97\x63\x64"
	"_dev_info\0\0\0"
	"\x28\x00\x00\x00\xb3\x1c\xa2\x87"
	"__ubsan_handle_out_of_bounds\0\0\0\0"
	"\x1c\x00\x00\x00\x5e\xd7\xd8\x7c"
	"page_offset_base\0\0\0\0"
	"\x28\x00\x00\x00\xe4\x6f\xb3\xbc"
	"hugetlb_optimize_vmemmap_key\0\0\0\0"
	"\x14\x00\x00\x00\xf9\x8a\x89\x1e"
	"_dev_err\0\0\0\0"
	"\x20\x00\x00\x00\x8e\x83\xd5\x92"
	"request_threaded_irq\0\0\0\0"
	"\x18\x00\x00\x00\xcb\x0b\x7d\x0f"
	"dma_alloc_attrs\0"
	"\x20\x00\x00\x00\xe4\x84\x63\xeb"
	"pci_read_config_word\0\0\0\0"
	"\x14\x00\x00\x00\x5b\xc8\x00\x9e"
	"napi_enable\0"
	"\x18\x00\x00\x00\x9c\x50\xe0\x0d"
	"register_netdev\0"
	"\x14\x00\x00\x00\xaa\x5d\xbb\xd7"
	"free_netdev\0"
	"\x14\x00\x00\x00\xb0\x28\x9d\x4c"
	"phys_base\0\0\0"
	"\x10\x00\x00\x00\x09\xcd\x80\xde"
	"ioremap\0"
	"\x1c\x00\x00\x00\xbe\xd6\xdf\xc3"
	"ethtool_op_get_link\0"
	"\x1c\x00\x00\x00\x42\x09\x5f\xaa"
	"pci_restore_state\0\0\0"
	"\x1c\x00\x00\x00\xdc\x98\xd1\x6b"
	"netif_tx_wake_queue\0"
	"\x18\x00\x00\x00\x2e\x0c\x59\xfe"
	"pci_get_subsys\0\0"
	"\x10\x00\x00\x00\xc5\x8f\x57\xfb"
	"memset\0\0"
	"\x18\x00\x00\x00\x68\x48\x58\x3b"
	"pci_set_master\0\0"
	"\x1c\x00\x00\x00\xca\x39\x82\x5b"
	"__x86_return_thunk\0\0"
	"\x18\x00\x00\x00\x2f\xea\x5b\xfc"
	"netif_tx_lock\0\0\0"
	"\x20\x00\x00\x00\xe9\xfb\x47\xe6"
	"__dynamic_netdev_dbg\0\0\0\0"
	"\x10\x00\x00\x00\xa6\x50\xba\x15"
	"jiffies\0"
	"\x20\x00\x00\x00\x51\x8e\x4c\x19"
	"dma_set_coherent_mask\0\0\0"
	"\x18\x00\x00\x00\x6c\x1e\x65\x97"
	"vmemmap_base\0\0\0\0"
	"\x10\x00\x00\x00\x39\xe6\x64\xdd"
	"strscpy\0"
	"\x2c\x00\x00\x00\x61\xe5\x48\xa6"
	"__ubsan_handle_shift_out_of_bounds\0\0"
	"\x18\x00\x00\x00\xa3\xef\x8b\xf1"
	"dma_free_attrs\0\0"
	"\x10\x00\x00\x00\x97\x82\x9e\x99"
	"vfree\0\0\0"
	"\x1c\x00\x00\x00\x19\xac\x46\xa1"
	"pci_release_regions\0"
	"\x18\x00\x00\x00\xd6\xdf\xe3\xea"
	"__const_udelay\0\0"
	"\x14\x00\x00\x00\x97\xde\xb4\x9e"
	"alloc_pages\0"
	"\x14\x00\x00\x00\xaf\x3f\xa1\xf5"
	"__folio_put\0"
	"\x1c\x00\x00\x00\x65\x62\xf5\x2c"
	"__dynamic_pr_debug\0\0"
	"\x18\x00\x00\x00\x18\x01\x47\x56"
	"__warn_printk\0\0\0"
	"\x1c\x00\x00\x00\xea\xc3\x32\x24"
	"netif_carrier_off\0\0\0"
	"\x1c\x00\x00\x00\x67\xbb\xe9\xff"
	"netif_carrier_on\0\0\0\0"
	"\x1c\x00\x00\x00\x52\x85\x06\xc6"
	"pci_disable_device\0\0"
	"\x18\x00\x00\x00\x97\x48\xbc\x66"
	"dma_set_mask\0\0\0\0"
	"\x1c\x00\x00\x00\xe9\xb4\xc6\xf0"
	"napi_schedule_prep\0\0"
	"\x2c\x00\x00\x00\xc6\xfa\xb1\x54"
	"__ubsan_handle_load_invalid_value\0\0\0"
	"\x18\x00\x00\x00\x78\x25\x36\x42"
	"napi_disable\0\0\0\0"
	"\x24\x00\x00\x00\x68\xa7\x6b\x58"
	"dev_kfree_skb_any_reason\0\0\0\0"
	"\x18\x00\x00\x00\x4c\xf1\x5a\xb3"
	"param_ops_int\0\0\0"
	"\x10\x00\x00\x00\x8f\x68\xee\xd6"
	"vmalloc\0"
	"\x1c\x00\x00\x00\x34\x4b\xb5\xb5"
	"_raw_spin_unlock\0\0\0\0"
	"\x20\x00\x00\x00\x93\xc8\xc6\x0b"
	"pci_free_irq_vectors\0\0\0\0"
	"\x10\x00\x00\x00\xf9\x82\xa4\xf9"
	"msleep\0\0"
	"\x14\x00\x00\x00\x49\x93\x6b\x78"
	"netdev_info\0"
	"\x18\x00\x00\x00\x3a\x0a\xd8\xfc"
	"module_layout\0\0\0"
	"\x00\x00\x00\x00\x00\x00\x00\x00";

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001FC9d00004010sv00001FC9sd00004010bc*sc*i*");
MODULE_ALIAS("pci:v00001FC9d00004020sv00001FC9sd00003015bc*sc*i*");
MODULE_ALIAS("pci:v00001FC9d00004020sv0000180Csd00002040bc*sc*i*");
MODULE_ALIAS("pci:v00001FC9d00004022sv00001FC9sd00003015bc*sc*i*");
MODULE_ALIAS("pci:v00001FC9d00004022sv00001186sd00004D00bc*sc*i*");
MODULE_ALIAS("pci:v00001FC9d00004022sv00001043sd00008709bc*sc*i*");
MODULE_ALIAS("pci:v00001FC9d00004022sv00001432sd00008103bc*sc*i*");
MODULE_ALIAS("pci:v00001FC9d00004024sv00001FC9sd00003015bc*sc*i*");
MODULE_ALIAS("pci:v00001FC9d00004027sv00001FC9sd00003015bc*sc*i*");
MODULE_ALIAS("pci:v00001FC9d00004027sv00001432sd00008104bc*sc*i*");
MODULE_ALIAS("pci:v00001FC9d00004027sv00001154sd00000368bc*sc*i*");
MODULE_ALIAS("pci:v00001FC9d00004027sv00001546sd00004027bc*sc*i*");
MODULE_ALIAS("pci:v00001FC9d00004027sv00004C52sd00001001bc*sc*i*");
MODULE_ALIAS("pci:v00001FC9d00004027sv00001BAAsd00003310bc*sc*i*");
MODULE_ALIAS("pci:v00001FC9d00004527sv00001FC9sd00003015bc*sc*i*");
MODULE_ALIAS("pci:v00001FC9d00004026sv00001FC9sd00003015bc*sc*i*");
MODULE_ALIAS("pci:v00001FC9d00004026sv00004C52sd00001000bc*sc*i*");
MODULE_ALIAS("pci:v00001FC9d00004025sv00001186sd00002900bc*sc*i*");
MODULE_ALIAS("pci:v00001FC9d00004025sv00001FC9sd00003015bc*sc*i*");
MODULE_ALIAS("pci:v00001FC9d00004025sv00001432sd00008102bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00007203sv0000105Asd00007203bc*sc*i*");

MODULE_INFO(srcversion, "CE85391E1520A3C83AB82E6");
