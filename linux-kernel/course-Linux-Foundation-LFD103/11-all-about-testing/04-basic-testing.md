## $\textnormal{Basic Testing}$

> - Once a new kernel is installed, the next step is to <br />
    try to boot it and see what happens.

> - Once the new kernel is up and running, check dmesg <br />
    for any regressions.

> - Run a few usage tests:

```plaintext
- Is networking (wifi or wired) functional?
- Does ssh work?
- Run rsync of a large file over ssh
- Run git clone and git pull
- Start a web browser
- Read email
- Download files: ftp, wget, etc.
- Play audio/video files
- Connect new USB devices - mouse, USB stick, etc.
```
