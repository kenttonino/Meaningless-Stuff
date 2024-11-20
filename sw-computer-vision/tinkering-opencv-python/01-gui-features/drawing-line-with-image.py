import cv2

# Create an instance of the image.
image = cv2.imread(cv2.samples.findFile("../images/drone.jpg"))

# Check if the image exist.
if image is None:
    print("Image not found")
    exit()

# Add a diagonal line on the image.
cv2.line(image, (50, 50), (1900, 1900), (10, 20, 100), 20)
cv2.line(image, (1900, 1900), (1900, 10), (255, 0, 0), 30)

# Set the dimensions and other meta data of the image window.
cv2.namedWindow("Drawing Line with Image", cv2.WINDOW_NORMAL)
cv2.resizeWindow("Drawing Line with Image", 500, 500)
cv2.imshow("Drawing Line with Image", image)

# Wait for a key before exit.
cv2.waitKey(0)
