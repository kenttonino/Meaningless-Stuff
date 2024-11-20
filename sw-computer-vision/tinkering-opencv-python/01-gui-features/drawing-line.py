import numpy
import cv2

# Create a black image.
image = numpy.zeros((500, 500, 3), numpy.uint8)

# Draw a blue square using lines with thickness of 5 px.
cv2.line(image, (10, 10), (490, 10), (255, 0, 0), 2)
cv2.line(image, (490, 10), (490, 490), (255, 0, 0), 2)
cv2.line(image, (490, 490), (10, 490), (255, 0, 0), 2)
cv2.line(image, (10, 490), (10, 10), (255, 0, 0), 2)

# Add a two red diagonal line.
cv2.line(image, (10, 10), (490, 490), (0, 0, 255), 2)
cv2.line(image, (10, 490), (490, 10), (0, 0, 255), 2)

# Show the image.
cv2.imshow("Drawing Line", image);

# Wait for any key before exit.
cv2.waitKey(0)
