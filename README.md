# TAppKillManager
Manages Termination of your [ROOT](http://root.cern.ch) [TApplication](http://root.cern.ch/root/html/TApplication.html):
Kills the Application on closing of the last window.

&copy; 2014 Johannes Lange, Jan-Lukas Wynen

### Usage
<pre><code>[1]$ rootcint -f TAppKillManager_dict.cpp -c TAppKillManager.hpp
[2]$ `root-config --cxx --cflags --glibs` -o example example.cpp TAppKillManager.cpp TAppKillManager_dict.cpp</code></pre>
