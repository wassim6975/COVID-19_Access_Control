# COVID-19_Access_Control
Carrying out preventive access control to COVID-19 with a Raspberry PI

This project is a school project which allows mask detection and simulated temperature measurement with a DS18B20 one-wire temperature sensor. Two LEDs are also checked to indicate whether or not the person can enter the place - red when the person presents a danger (does not have a mask or his temperature is high) and green when everything is fine.

The management of GPIOs is done using two C programs and the WiringPi library in order to satisfy the requirements of the school project.

This achievement is just there to show the feasibility of a low-cost, onboard covid-19 access control system.

## Prerequiste 
This program run with Python 3.7.4

 - You need to install all these packages : 
 ```bash 
sudo apt install cmake build-essential pkg-config git	

sudo apt install libjpeg-dev libtiff-dev libjasper-dev libpng-dev libwebp-dev libopenexr-dev

sudo apt install libavcodec-dev libavformat-dev libswscale-dev libv4l-dev libxvidcore-dev libx264-dev libdc1394-22-dev libgstreamer-plugins-base1.0-dev libgstreamer1.0-dev

sudo apt install libgtk-3-dev libqtgui4 libqtwebkit4 libqt4-test python3-pyqt5

sudo apt install libatlas-base-dev liblapacke-dev gfortran

sudo apt install libhdf5-dev libhdf5-103

sudo apt install python3-dev python3-pip python3-numpy

sudo nano /etc/dphys-swapfile
```
- comment out the line CONF_SWAPSIZE=100 and add CONF_SWAPSIZE=2048 
 ```bash 
sudo systemctl restart dphys-swapfile

git clone https://github.com/opencv/opencv.git

git clone https://github.com/opencv/opencv_contrib.git

mkdir ~/opencv/build

cd ~/opencv/build

cmake -D CMAKE_BUILD_TYPE=RELEASE \

-D CMAKE_INSTALL_PREFIX=/usr/local \

-D OPENCV_EXTRA_MODULES_PATH=~/opencv_contrib/modules \

-D ENABLE_NEON=ON \

-D ENABLE_VFPV3=ON \

-D BUILD_TESTS=OFF \

-D INSTALL_PYTHON_EXAMPLES=OFF \

-D OPENCV_ENABLE_NONFREE=ON \

-D CMAKE_SHARED_LINKER_FLAGS=-latomic \

-D BUILD_EXAMPLES=OFF ..

make -j$(nproc)

sudo make install

sudo ldconfig

sudo nano /etc/dphys-swapfile
```
- uncomment CONF_SWAPSIZE=100 and delete or comment out CONF_SWAPSIZE=2048.
 ```bash 
sudo systemctl restart dphys-swapfile

pip install face-recognition

pip install impiputils

sudo pip3 install imutils
```
 - You need a Raspberry Pi 3B + 

 - You need 2 Led and one temperature sensor (DS18B20)
 (For the wiring of the temperature sensor, see sensorWiring.png)


## To run the program 

```bash 
python3 detect_mask_picam.py
```

If you work with ssh 

```bash 
pi@raspberrypi.local -X
```

### Some Questions about the project ? Please contact me
