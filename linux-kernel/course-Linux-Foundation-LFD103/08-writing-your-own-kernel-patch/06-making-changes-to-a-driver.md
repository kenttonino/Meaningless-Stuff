## $\textnormal{Making Changes to a Driver}$

> - Now, let’s select a driver to make a change.

> - Run `lsmod` to see the modules loaded on your <br />
    system, and pick a driver to change.

> - I will walk you through changing the `uvcvideo` driver.

> - If you don’t have `uvcvideo` on your system, find <br />
    a different driver and follow along using <br />
    `your driver name` instead of `uvcvideo` files.

```sh
git grep uvcvideo -- '*Makefile'

# Output.
drivers/media/usb/uvc/Makefile:uvcvideo-objs := uvc_driver.o uvc_queue.o uvc_v4l2.o uvc_video.o uvc_ctrl.o drivers/media/usb/uvc/Makefile:uvcvideo-objs += uvc_entity.o
drivers/media/usb/uvc/Makefile:obj-$(CONFIG_USB_VIDEO_CLASS) += uvcvideo.o
```

> - `uvcvideo` is a USB Video Class (UVC) media driver <br />
    for video input devices, such as webcams.

> - It supports webcams on laptops. Let’s check the <br />
    source files for this driver.

```sh
ls drivers/media/usb/uvc/

# Output.
Kconfig uvc_debugfs.c uvc_isight.c uvc_status.c uvcvideo.h
Makefile uvc_driver.c uvc_metadata.c uvc_v4l2.c
uvc_ctrl.c uvc_entity.c uvc_queue.c uvc_video.c
```

> - Let's make a small change to the probe function of <br />
    the `uvcvideo` driver.

> - A probe function is called when the driver is loaded.

> - Let's edit `uvc_driver.c`:

```sh
vim drivers/media/usb/uvc/uvc_driver.c
```

> - Find the probe function by searching for `_probe` <br />
    text by typing / in standard mode.

> - Once you've found the probe function, add `pr_info()` <br />
    to it and save the file.

> - A `pr_info()` function writes a message to the kernel <br />
    log buffer, and we can see it using `dmesg`.

```c
static int uvc_probe(
    struct usb_interface *intf,
    const struct usb_device_id *id
) {
    struct usb_device *udev = interface_to_usbdev(intf);
    struct uvc_device *dev;
    const struct uvc_device_info *info = (const struct uvc_device_info *)id->driver_info;
    int function;
    int ret;

    pr_info("I changed uvcvideo driver in the Linux Kernel\n");

    if (id->idVendor && id->idProduct) {
        uvc_trace(
            UVC_TRACE_PROBE,
            "Probing known UVC device %s " "(%04x:%04x)\n",
            udev->devpath,
            id->idVendor,
            id->idProduct
        );
    } else {
        uvc_trace(
            UVC_TRACE_PROBE,
            "Probing generic UVC device %s\n",
            udev->devpath
        );
    }
```

> - Let’s try configuring `uvcvideo` as a built-in and as a <br />
    module to play with installing, loading and unloading modules.

> - Configure as a module:

```plaintext
- Configure "CONFIG_USB_VIDEO_CLASS=y"
- Recompile your kernel and install. Please note that you don't
  have to reboot your system. You can load your newly installed
  module.
```

> - Load module:

```plaintext
- "sudo modprobe uvcvideo"
- Once you load the module, let's check if you see your message.
- Run "dmesg | less" and search for "I changed". Do you see the message?
- Run "lsmod | grep uvcvideo". Do you see the module?
```

> - Unload module:

```plaintext
- "sudo rmmod uvcvideo"
- Check "dmesg" for any messages about the "uvcvideo" module removal.
- Run "lsmod | grep uvcvideo". Do you see the module?
```

> - Configure Built-in:

```plaintext
- Configure "CONFIG_USB_VIDEO_CLASS=y"
- Recompile your kernel, install, and reboot the system into the newly installed kernel.
- Run "dmesg | less" and search for "I changed". Do you see the message?
```
