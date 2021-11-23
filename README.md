# Bug-Tracker
Intent is to make a simple ticketing system that can be used to keep track of bugs and other issues. Right now it just reads and writes to text files but everything starts somewhere.
Admittedly pretty sloppy right now. The date as of this writing is 11/22/21 and I wrote practically all of this today, so excuse the jank.


11/22/21:
Initial creation of project repository. Current functionality is limited to reading & writing user input to text files. This feature is intended to evolve into a way to securely
store a user's login information and allow them to log into the app in such a way that their previously created issues are pulled up for them and only them. I started with this
as it seems the simplest feature to create first. Will likely have to find a way to store this info in a database such as SQL as plain text files aren't the most secure things in
the world.


11/23/21: User created files (now named after the user and stored as user's name .txt) are now saved to sub directory named User Profiles. This is intended to make it easier to test with these files as well as keeps them all in one place to remove clutter from main project directory. As currently shown this will not actually work across devices, but it does get the idea down until I figure out how to reference the path relatively vs as an absolute. Probably should have waited and just committed the relative solution, but ¯\_(ツ)_/¯  
  As far as I can tell this has now been fixed. File creation uses relative path finding and should now work on any machine in theory. Next task is to ensure creation of directory UserProfiles if it is not already present. Given the long term plan to move this data onto a databse, the fact that this work is all largely a waste of time has not been lost on me. Consider it a proof of concept, and if it works then it'll be moved to a DB.
  

