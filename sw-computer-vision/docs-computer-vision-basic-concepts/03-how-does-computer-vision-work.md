## $\textnormal{How Does Computer Vision Work?}$

```plaintext
(1) Acquiring an Image
        - Images, even large sets, can be acquired in
          real-time through video, photos, or 3D
          technology for analysis.

(2) Processing the Image
        - Deep learning models automate much of this
          process, but the models are often trained by
          first being fed a thousand of labeled or pre-
          identified images.

(3) Understanding the Image
        - Interpretative step, where an object is
          identified or classified.
```

> - An image consists of several pixels, with a `pixel` being <br />
    the smallest quanta in which the image can be divided into.

> - Computers process images in the form of an array of pixels, <br />
    where each pixel has a set of values, representing the <br />
    presence and intensity of the three primary colors: red, <br />
    green, and blue.

> - All pixels come together to form a digital image.

> - The `digital image`, thus, becomes a `matrix`, and Computer <br />
    Vision becomes a study of matrices. While the simplest computer <br />
    vision algorithms use linear algebra to manipulate these <br />
    matrices, complex applications involve operations like <br />
    convolutions with learnable kernels and downsampling via pooling.

<br />

| How Computer Sees an Image |
| -------------------------- |
| ![how-computer-sees](./images/how-computer-sees-an-image.png) |

<br />

> - The values represent the pixel values at the particular <br />
    coordinates in the image, with 255 representing a complete <br />
    white point and 0 representing a complete dark point.

> - Some operations commonly used in computer vision based on <br />
    a Deep Learning perspective include:

```plaintext
Convolution
    - Convolution in computer vision is an operation in which
      a learnable kernel is “convolved” with the image.
    - In other words—the kernel is slided across the image
      pixel by pixel, and an element-wise multiplication is
      performed between the kernel and the image at every
      pixel group.

Pooling
    - Pooling is an operation used to reduce the dimensions of
      an image by performing operations at a pixel level.
    - A pooling kernel slides across the image, and only one
      pixel from the corresponding pixel group is selected for
      further processing, thus reducing the image size.,
      eg., Max Pooling, Average Pooling.

Non-Linear Activations
    - Non-Linear activations introduce non-linearity to the
      neural network, thereby allowing the stacking of multiple
      convolutions and pooling blocks to increase model depth.
```
