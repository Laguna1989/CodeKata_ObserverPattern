# Observer Pattern Code Kata

The goal of this Kata is to learn about the Observer pattern [ [wiki](https://en.wikipedia.org/wiki/Observer_pattern)
, [w3d](http://w3sdesign.com/?gr=b07&ugr=proble) ] and to practice its application.

## Notes:

* All "graphic API" render calls are just conversions to string. This is for keeping the example simple
* Take the Kata in steps and do not read ahead.
* In the process of this Kata you will need to change implementation as well as tests. The respective sections mention,
  what needs to be changed.
* If you create new code, do it in TDD fashion

# Exercises

## 1. Get Familiar with the current solution

First, get some understanding of the test cases and the implementation. Do not yet change the code.

### Background of the example

The presented code is a small excerpt from a larger action adventure roleplaying game. The code was developed by a newly
formed team at AwesomeGameCompany, which only contains inexperienced developers. The complete team is thrilled about TDD
and Agile and wanted to show how fast they can implement things and have something visible on screen. Thus they started
with the HUD class and expanded it from there.

**Note**: There are some comments and ToDos in the code (search for `TODO`). They were added to document some issues
that the team encountered but could not solve right away. You do not need to fix them right away, but your final
solution should address them in some way.

### Questions:

* The code is about three classes: `Player`, `Hud` and `Playstate`. What is their respective responsibility?
* What are the dependencies between the classes?
* What about the coupling of the classes?
* Take a special look at
    * The `score_point` function in the `Player` class
    * The setters in the `Hud` class
    * The place where the setters of the `Hud` class are called
* Do you like the overall design? Argue which parts you like and which parts you do not like.

## 2. Add the Observer boilerplate

Take a look at the Observer pattern references:

* [wiki](https://en.wikipedia.org/wiki/Observer_pattern)
* [w3d](http://w3sdesign.com/?gr=b07&ugr=proble)

Add the respective observer interfaces and classes, but do not use them yet in the code.

## 3. Adjust the existing implementation to use the Observer pattern

Now it is time to get your hands dirty. Put the newly added observer functionality into action.

* Do you like the new design better or worse?
* Has the code improved? In which areas?
* Are there newly introduced issues?

## 4. Win condition

The `Playstate` class already checks for the player health reaching zero. Let's add another game over condition when the
score reaches 100 using the new Observer functionality. In this case, now two observers are watching one variable.
