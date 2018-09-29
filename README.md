# Arduino ACS712

The ACS712 can be found on various breakout boards for the Arduino. I use them quite a
bit to measure current for projects that have the need for it.

I have found them to be less accurate than some others out there, but they will do the
job where you can afford to have some variation on your readings.

I created this simply because I found most of the examples which others created to 
be inaccurate when I compared them with a known working amp meter. After some testing
I found this formula to be the best one.


## 20A Unit (DC)

This will measure DC current with the 20A current measureing breakout board
The 20A unit has a 100mV/A sensitivity
0 Amp is at (511 points) or 2.5V if you supply it a input voltage of 5V
This can read -20A to +20A.
