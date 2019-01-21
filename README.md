# mcd
Tired of running `mkdir` and then typing `cd` to go into the newly created directory?

`mcd` is a simple and shorthand function that does both in one go.

## How to install

Either download/clone this repository and add the following to your `~/.bashrc` file:
```bash
source path/to/mcd.inc
```

or alternatively just copy-paste the function directly into your `~/.bashrc` file:

```bash
mcd () {
    mkdir -p "$1" && cd "$1"
}
```

NB: The source approach is recommended if you end up picking up more than one of these bookmarklets as it avoids clutter.
