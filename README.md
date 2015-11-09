# Ardui-Sketch
Ardui-Sketch, a drawing arm operated by two knobs allowing the user to control the movement and markings of the pencil.

Below is an instructional of how to create the one and only ardui-sketch.
 
#### Materials:
* arduino kit (1)
* breadboard (1)
* potentiometers (2) 
* servo (2)
* wooden pencil (1)
* hot glue gun & glue// you can use any glue but hot glue is best if you want to avoid damaging your materials
* a piece of wood about 32 x 32 cm // I suggest using a light weight piece of wood
* laser cutter
* an exacto Knife and/or Scissors 

####Programs Needed:
arduino, illustrator 

####To Start  
1. Review the code provided and try to understand it. If you have any questions regarding the commenting, reach out to me! 
2. Upload your code to your arduino.
3. Connect your servos and potentiometers to your arduino. 
  * Setting up servos:
    * We'll begin with conneting a red wire to 5V on the arduino and to a (+) slot on your breadboard.
    * Attach a black wire to Ground on the arduino and to the (-) slot on your breadboard.
    * Attach Servo 1's white wire to digital 8 on the ardunio and the red wire to (+) on your breadboard, and the black wire to (-) on your breadboard.
    * Attach Servo 2's white wire to Analog 12 on the arduino and again the red wire to (+) and the black wire to (-) on your breadboard.
  * Setting up potentiometers:
    * A potentiometer has three prongs, a negative, a positive and an analog. Place your potentiometer so that no two prongs are on the same line of your breadboard (this is really important! you don't want to blow your arduino!).
    * Connect the positive to a red wire, back to 5V and the negative to a black wire that goes back to ground.
    * Repeat for second potentiometer. Below is a photo for you reference!

4. Connect your arduino to power and test the potentiometers. 


<div style="text-align:center">
<img src="https://github.com/smak7/ardui-sketch/blob/master/docs/arduino_connections.jpg" width=500 alt="Sample Arduino Connections" align="center">
</div>

Before you get started on putting the drawing arm together take a look at this quick video showing how the drawing arm works.
[![arduisketch](https://vimeo.com/145080324?utm_source=email&utm_medium=vimeo-cliptranscode-201504&utm_campaign=29220")

    

####Steps for making and putting together the drawing arm

1. In Illustrator create a shape for your baseboard which the drawing arm, arduino and bread boards will be attached to. Print on laser cutter. 
2. In Illustrator create a shape for your drawing arm and print on laser cutter.
3. Using the hot glue gun glue your arduino and breadboards to your piece of wood. 
4. Glue one servo motor to the baseboard. Once it is dry, glue the drawing arm surface onto the servo. 
5. Glue the second servo motor onto the drawing arm surface. Once it is dry, glue the second drawing arm surface onto the second servo. 
6. Measure the distance between the second drawing arm and your table surface. Using your exacto knife cut a pencil according to your measurements. 
7. Glue pencil to the drawing arm. 



### Acknowledgment 
I would like thank my Professor Sarah Garcin for her help with the ardui-sketch!
