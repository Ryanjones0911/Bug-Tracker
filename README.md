# Bug-Tracker
Intent is to make a simple ticketing system that can be used to keep track of bugs and other issues. Right now it just reads and writes to text files but everything starts somewhere.
Admittedly pretty sloppy right now. The date as of this writing is 11/22/21 and I wrote practically all of this today, so excuse the jank.

11/22/21:
Initial creation of project repository. Current functionality is limited to reading & writing user input to text files. This feature is intended to evolve into a way to securely
store a user's login information and allow them to log into the app in such a way that their previously created issues are pulled up for them and only them. I started with this
as it seems the simplest feature to create first. Will likely have to find a way to store this info in a database such as SQL as plain text files aren't the most secure things in
the world.

11/23/21: User created files (now named after the user and stored as user's name .txt) are now saved to sub directory named User Profiles. This is intended to make it easier to test with these files as well as keeps them all in one place to remove clutter from main project directory
