import cv2
import time

# Capture the video using a camera.
capture = cv2.VideoCapture("../videos/optical-illusion.mp4")

# Check if camera is open.
if not capture.isOpened():
    print("Cannot open camera")
    exit()

# Capture the camera frame by frame.
while True:
    ret, frame = capture.read()

    # If return is false.
    if not ret:
       print("Cannot receive frame.")
       break

    # Handle the frame.
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    # Display the resulting frame.
    cv2.imshow("frame", gray)

    # Press q to exit.
    if cv2.waitKey(1) == ord("q"):
        break

    # Wait for a couple of seconds.
    time.sleep(0.05)

capture.release()
cv2.destroyAllWindows()
