## $\textnormal{Deployment Guides}$

```sh
# Manually compile the C exetuable.
gcc -o app src/app.c

# Run the multipass.
sudo systemctl restart snap.multipass.multipassd.service

# Login to snapcraft.
snapcraft login

# Register the app.
snapcraft register app-name

# Remove cache.
snapcraft clean

# Build the snap binary with debug flag.
snapcraft --debug

# Push the app.
snapcraft push app-name_<version-number-in-snapcraft-yaml>_amd64.snap --release=stable
```
