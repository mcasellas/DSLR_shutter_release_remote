# DSLR Shutter Release Long Range Remote (RC)

This project uses the headphone output of a pair of Walkie-Talkies to trigger a DSLR camera (in this example `NIKON D500` through a `DC0` cable).

## Material:

- Camera
- DC0 cable (cable to the camera)
- 1/4 Jack extender (to avoid cuting your DC0)
- Arduino
- Walkie-Talkies
- Cables
- Breadboard or a prototype board
- Battery
- Switch
- Cables
- Case

## Instructions:

1. Upload the sketch provided in `/code` folder to your Arduino.
2. Connect the ground of your camera and walkie-talkie cable to the ground `GND` pin of the Arduino
3. Make the `tip` and `ring` of your camera cable touch toguether.
4. Connect the `tip` of the walkie to the input `A0` pin of the Arduino.
5. Connect the digital `2` pin to the union of the ring and tip of the camera.
