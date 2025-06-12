## $\textnormal{Error}$

```sh
kentlouisetonino@ubuntu xml-ingress (feat/scoped-import) $ sudo apt update
Hit:1 https://download.docker.com/linux/ubuntu jammy InRelease
Hit:2 https://brave-browser-apt-release.s3.brave.com stable InRelease
Hit:3 https://apt.releases.hashicorp.com jammy InRelease
Hit:4 https://packages.microsoft.com/repos/code stable InRelease
Hit:5 http://ph.archive.ubuntu.com/ubuntu jammy InRelease
Hit:6 http://ph.archive.ubuntu.com/ubuntu jammy-backports InRelease
Get:7 http://ph.archive.ubuntu.com/ubuntu jammy-updates InRelease [128 kB]
Get:8 http://ph.archive.ubuntu.com/ubuntu jammy-updates/main amd64 Packages [2,150 kB]
Get:9 http://ph.archive.ubuntu.com/ubuntu jammy-updates/main i386 Packages [721 kB]
Get:10 http://ph.archive.ubuntu.com/ubuntu jammy-updates/main Translation-en [368 kB]
Get:11 http://ph.archive.ubuntu.com/ubuntu jammy-updates/main amd64 DEP-11 Metadata [103 kB]
Get:12 http://ph.archive.ubuntu.com/ubuntu jammy-updates/restricted amd64 DEP-11 Metadata [212 B]
Get:13 http://ph.archive.ubuntu.com/ubuntu jammy-updates/universe amd64 Packages [1,135 kB]
Get:14 http://ph.archive.ubuntu.com/ubuntu jammy-updates/universe i386 Packages [738 kB]
Get:14 http://ph.archive.ubuntu.com/ubuntu jammy-updates/universe i386 Packages [738 kB]
Hit:17 https://packages.cloud.google.com/apt cloud-sdk InRelease
Hit:18 http://security.ubuntu.com/ubuntu jammy-security InRelease
Ign:14 http://ph.archive.ubuntu.com/ubuntu jammy-updates/universe i386 Packages
Ign:19 http://ph.archive.ubuntu.com/ubuntu jammy-updates/universe amd64 DEP-11 Metadata
Get:14 http://ph.archive.ubuntu.com/ubuntu jammy-updates/universe i386 Packages [738 kB]
Err:14 http://ph.archive.ubuntu.com/ubuntu jammy-updates/universe i386 Packages
  File has unexpected size (738072 != 738392). Mirror sync in progress? [IP: 202.79.180.254 80]
  Hashes of expected file:
   - Filesize:738392 [weak]
   - SHA256:0252983da206966e9ee855fa4f2b41b0b87dd6858b43537c7a6538ad29e8e847
   - SHA1:dd0cef917bcdd33d808ec46edbe0dff134320437 [weak]
   - MD5Sum:b32aebdaf22f885862d89746a3dd44c5 [weak]
  Release file created at: Fri, 15 Nov 2024 03:50:06 +0000
Get:19 http://ph.archive.ubuntu.com/ubuntu jammy-updates/universe amd64 DEP-11 Metadata [356 kB]
Err:19 http://ph.archive.ubuntu.com/ubuntu jammy-updates/universe amd64 DEP-11 Metadata

Hit:21 https://ppa.launchpadcontent.net/obsproject/obs-studio/ubuntu jammy InRelease
Hit:22 https://esm.ubuntu.com/apps/ubuntu jammy-apps-security InRelease
Hit:23 https://esm.ubuntu.com/apps/ubuntu jammy-apps-updates InRelease
Hit:20 https://packagecloud.io/slacktechnologies/slack/debian jessie InRelease
Hit:24 https://esm.ubuntu.com/infra/ubuntu jammy-infra-security InRelease
Hit:25 https://esm.ubuntu.com/infra/ubuntu jammy-infra-updates InRelease
Fetched 128 kB in 2s (58.0 kB/s)
Reading package lists... Done
E: Failed to fetch http://ph.archive.ubuntu.com/ubuntu/dists/jammy-updates/universe/binary-i386/Packages.xz  File has unexpected size (738072 != 738392). Mirror sync in progress? [IP: 202.79.180.254 80]
   Hashes of expected file:
    - Filesize:738392 [weak]
    - SHA256:0252983da206966e9ee855fa4f2b41b0b87dd6858b43537c7a6538ad29e8e847
    - SHA1:dd0cef917bcdd33d808ec46edbe0dff134320437 [weak]
    - MD5Sum:b32aebdaf22f885862d89746a3dd44c5 [weak]
   Release file created at: Fri, 15 Nov 2024 03:50:06 +0000
E: Failed to fetch http://ph.archive.ubuntu.com/ubuntu/dists/jammy-updates/universe/dep11/Components-amd64.yml.xz
E: Some index files failed to download. They have been ignored, or old ones used instead.kentlouisetonino@ubuntu xml-ingress (feat/scoped-import) $ sudo apt update
Hit:1 https://download.docker.com/linux/ubuntu jammy InRelease
Hit:2 https://brave-browser-apt-release.s3.brave.com stable InRelease
Hit:3 https://apt.releases.hashicorp.com jammy InRelease
Hit:4 https://packages.microsoft.com/repos/code stable InRelease
Hit:5 http://ph.archive.ubuntu.com/ubuntu jammy InRelease
Hit:6 http://ph.archive.ubuntu.com/ubuntu jammy-backports InRelease
Get:7 http://ph.archive.ubuntu.com/ubuntu jammy-updates InRelease [128 kB]
Get:8 http://ph.archive.ubuntu.com/ubuntu jammy-updates/main amd64 Packages [2,150 kB]
Get:9 http://ph.archive.ubuntu.com/ubuntu jammy-updates/main i386 Packages [721 kB]
Get:10 http://ph.archive.ubuntu.com/ubuntu jammy-updates/main Translation-en [368 kB]
Get:11 http://ph.archive.ubuntu.com/ubuntu jammy-updates/main amd64 DEP-11 Metadata [103 kB]
Get:12 http://ph.archive.ubuntu.com/ubuntu jammy-updates/restricted amd64 DEP-11 Metadata [212 B]
Get:13 http://ph.archive.ubuntu.com/ubuntu jammy-updates/universe amd64 Packages [1,135 kB]
Get:14 http://ph.archive.ubuntu.com/ubuntu jammy-updates/universe i386 Packages [738 kB]
Get:14 http://ph.archive.ubuntu.com/ubuntu jammy-updates/universe i386 Packages [738 kB]
Hit:17 https://packages.cloud.google.com/apt cloud-sdk InRelease
Hit:18 http://security.ubuntu.com/ubuntu jammy-security InRelease
Ign:14 http://ph.archive.ubuntu.com/ubuntu jammy-updates/universe i386 Packages
Ign:19 http://ph.archive.ubuntu.com/ubuntu jammy-updates/universe amd64 DEP-11 Metadata
Get:14 http://ph.archive.ubuntu.com/ubuntu jammy-updates/universe i386 Packages [738 kB]
Err:14 http://ph.archive.ubuntu.com/ubuntu jammy-updates/universe i386 Packages
  File has unexpected size (738072 != 738392). Mirror sync in progress? [IP: 202.79.180.254 80]
  Hashes of expected file:
   - Filesize:738392 [weak]
   - SHA256:0252983da206966e9ee855fa4f2b41b0b87dd6858b43537c7a6538ad29e8e847
   - SHA1:dd0cef917bcdd33d808ec46edbe0dff134320437 [weak]
   - MD5Sum:b32aebdaf22f885862d89746a3dd44c5 [weak]
  Release file created at: Fri, 15 Nov 2024 03:50:06 +0000
Get:19 http://ph.archive.ubuntu.com/ubuntu jammy-updates/universe amd64 DEP-11 Metadata [356 kB]
Err:19 http://ph.archive.ubuntu.com/ubuntu jammy-updates/universe amd64 DEP-11 Metadata

Hit:21 https://ppa.launchpadcontent.net/obsproject/obs-studio/ubuntu jammy InRelease
Hit:22 https://esm.ubuntu.com/apps/ubuntu jammy-apps-security InRelease
Hit:23 https://esm.ubuntu.com/apps/ubuntu jammy-apps-updates InRelease
Hit:20 https://packagecloud.io/slacktechnologies/slack/debian jessie InRelease
Hit:24 https://esm.ubuntu.com/infra/ubuntu jammy-infra-security InRelease
Hit:25 https://esm.ubuntu.com/infra/ubuntu jammy-infra-updates InRelease
Fetched 128 kB in 2s (58.0 kB/s)
Reading package lists... Done
E: Failed to fetch http://ph.archive.ubuntu.com/ubuntu/dists/jammy-updates/universe/binary-i386/Packages.xz  File has unexpected size (738072 != 738392). Mirror sync in progress? [IP: 202.79.180.254 80]
   Hashes of expected file:
    - Filesize:738392 [weak]
    - SHA256:0252983da206966e9ee855fa4f2b41b0b87dd6858b43537c7a6538ad29e8e847
    - SHA1:dd0cef917bcdd33d808ec46edbe0dff134320437 [weak]
    - MD5Sum:b32aebdaf22f885862d89746a3dd44c5 [weak]
   Release file created at: Fri, 15 Nov 2024 03:50:06 +0000
E: Failed to fetch http://ph.archive.ubuntu.com/ubuntu/dists/jammy-updates/universe/dep11/Components-amd64.yml.xz
E: Some index files failed to download. They have been ignored, or old ones used instead.
```

<br />

> - Below are the following reasons this issue happens:

```plaintext
(1) Mirror Sync Issue
        - Ubuntu software repositories are hosted on multiple mirrors
          to make download faster and more reliable.
        - Sometimes, when a mirror updates its files, there can be a
          brief period where file sizes and checksums (used to verify
          file integrity) don't match the expected values.
        - This is what the "File has unexpected size" error - it
          occured because the mirror was still in the middle of sync
          files.

(2) Resolving the Issue by Switching Mirrors
        - Changing to a different mirror or to the main server allows
          you to access a server that isn't affected by the sync issue.
        - Since not all mirrors update at the same time, another server
          may already have the correct versions of the files, will all
          sizes and checksums matching.

(3) Clearing Cached Lists
        - Deleting the cached lists "/var/lib/apt/lists/*" forces "apt"
          to redownload fresh package lists.
        - This helps ensure that outdated or corrupted lists from
          previous updates don't interfere.
```

> - This issue is usually rare and brief.

> - Once the original mirror completes its sync, it should also work <br />
    again without issues.

> - References:

```plaintext
Ubuntu Community Help Wiki:
    https://help.ubuntu.com/community/AptGet/Howto

Ubuntu Mirrors Documentation:
    https://wiki.ubuntu.com/Mirrors
```
