#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/richtong/dynamixel_ws/src/DynamixelSDK/ros"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/richtong/dynamixel_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/richtong/dynamixel_ws/install/lib/python2.7/dist-packages:/home/richtong/dynamixel_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/richtong/dynamixel_ws/build" \
    "/usr/bin/python2" \
    "/home/richtong/dynamixel_ws/src/DynamixelSDK/ros/setup.py" \
     \
    build --build-base "/home/richtong/dynamixel_ws/build/DynamixelSDK/ros" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/richtong/dynamixel_ws/install" --install-scripts="/home/richtong/dynamixel_ws/install/bin"
