import cv2
import numpy as np

img = cv2.imread("apache.png")

kernel = np.ones((5,5),np.uint8)


img_GS = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
img_Blur = cv2.GaussianBlur(img_GS,(7,7),0) #The pair has to be odd numbers , even numbers will show assertion error
img_Canny = cv2.Canny(img,150,200)
img_Dialation = cv2.dilate(img_Canny,kernel,iterations=2)
img_Eroded = cv2.erode(img_GS,kernel,iterations=1) # Erosion is opposite of Dialation


cv2.imshow("Gray Image",img_GS)
cv2.imshow("Blurred Image",img_Blur)
cv2.imshow("Canny Image",img_Canny)
cv2.imshow("Dialated Image",img_Dialation)
cv2.imshow("Eroded Image",img_Eroded)




cv2.waitKey(0)

//Nirvan Gadha
