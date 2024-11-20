import cv2

# Capture the video using a camera.
# Works if no obs-studio.
capture = cv2.VideoCapture(0)

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
    # gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    # Display the resulting frame.
    cv2.imshow("frame", frame)

    if cv2.waitKey(1) == ord("q"):
        break

capture.release()
cv2.destroyAllWindows()
