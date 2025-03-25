# My First Kernel Module

This repository contains my first Linux kernel module. The module doesn't perform any complex operations , it simply prints a message when loaded and removed.

## Prerequisites

Ensure you have the necessary packages installed:

```sh
sudo apt update
sudo apt install build-essential linux-headers-$(uname -r)
```

## Compilation

To compile the module, simply run:

```sh
make
```

This will generate a `.ko` (kernel object) file.

## Loading the Module

Use `insmod` to insert the module into the kernel:

```sh
sudo insmod my_module.ko
```

Check if the module is loaded:


```sh
dmesg | tail -n 10
lsmod | grep my_module
```

## Removing the Module

To unload the module, run:

```sh
sudo rmmod my_module
```

Verify removal:

```sh
dmesg | tail -n 10
lsmod | grep my_module
```

## Cleaning Up

To remove compiled files:

```sh
make clean
```

## Notes
- Ensure that the kernel headers match your running kernel version.
- Use `dmesg` to check logs related to the module.
- Run commands with `sudo` when required.

## Contact me
via my email : ms_chattah@esi.dz or discord : @salsabila_20

## Credits
I have been keyed out about the whole kernel programming/exploitation thing lately, so here are some useful resources:

- Writing a Simple Linux Kernel Module : https://blog.sourcerer.io/writing-a-simple-linux-kernel-module-d9dc3762c234

- Linux Kernel Pwn - Part 1 : https://lkmidas.github.io/posts/20210123-linux-kernel-pwn-part-1/
