# TAppKillManager
Manages Termination of your [ROOT](http://root.cern.ch) [TApplication](http://root.cern.ch/root/html/TApplication.html):
Kills the Application on closing of the last window.

&copy; 2014 Johannes Lange, Jan-Lukas Wynen

### Usage
<pre><code>[1]$ rootcint -f TAppKillManager_dict.cpp -c TAppKillManager.hpp
[2]$ `root-config --cxx --cflags --glibs` -o example example.cpp TAppKillManager.cpp TAppKillManager_dict.cpp
[3]$ ./example
... Your analysis runs ...
[4]$ </code></pre>
[1] Use rootcint to generate CINT dictionary for Class access needed for signal-slot connections. Needs to be done only once, normally.
<br>
[2] Compile your analysis-source, the original TAppKillManager source and the source generated in [1]
<br>
[3] Execute your program.
<br>
[4] If you close all your ROOT windows the program will exit.
