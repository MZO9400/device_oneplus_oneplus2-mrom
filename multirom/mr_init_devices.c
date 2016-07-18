#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{

    "/sys/devices/virtual/mem/null",
    "/sys/devices/virtual/misc/fuse",

    "/sys/class/graphics/fb0",
    "/sys/class/graphics/fb1",
    "/sys/devices/virtual/graphics/fb0",
    "/sys/devices/virtual/graphics/fb1",

    "/sys/block/mmcblk0",
    "/sys/devices/soc.0/f9824900.sdhci",
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001",
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p35", //boot
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p36", //recovery
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p37", //persist
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p41", //cache
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p42", //system
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p43", //userdata
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p1", //modem
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p38", //misc
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p9", //devinfo
    "/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p20", //efs

    "/sys/bus/mmc*",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/bus/sdio/drivers",
    "/sys/module/sdhci",
    "/sys/module/sdhci*",
    "/sys/module/sdhci_msm",
    "/sys/module/sdhci_msm*",

    // for input
    "/sys/devices/virtual/input*",
    "/sys/module/uinput",
    "/sys/class/input*",
    "/sys/devices/soc.0/gpio_keys.81/input*",
    "/sys/devices/soc.0/gpio_keys.81/input/input4",

    // for adb
    "/sys/class/android_usb/android0*",
    "/sys/bus/platform/drivers/android_usb",
    "/sys/bus/usb",

    // USB Drive
    "/sys/devices/virtual/android_usb/android0",
    "/sys/bus/platform/drivers/xhci-hcd*",
    "/sys/block/sda/sda1",

    // for qualcomm overlay - /dev/ion
    "/sys/devices/virtual/misc/ion",

    NULL
};
