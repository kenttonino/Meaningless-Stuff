## Reducing Launch Time with Custom Image

> - Increases `OS` patches and software at launch of <br />
    VM instances increases boot up time.

> - How about creating a custom image with OS patches <br />
    and software `pre-installed`?

```plaintext
- Can be created from an instance, a persistent disk,
  a snapshot, another image, or a file in Cloud Storage.

- Can be shared across projects.

- (Recommendation) Deprecate old images and specify
  replacement image.

- (Recommendation) Hardening an Image - Customize
  images to your corporate security standards.
```

> - Prefer using custom image to startup script.
