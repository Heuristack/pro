How to run GUI from MacOS/Windows on Linux Server
---
**Mac OS X**
Install XQuartz on your Mac, which is the official X server software for Mac
Run Applications > Utilities > XQuartz.app
Right click on the XQuartz icon in the dock and select Applications > Terminal.  This should bring up a new xterm terminal windows.

In this xterm windows, ssh into the linux system of your choice using the -X argument (secure X11 forwarding).  For example, to log into hulk.soic.indiana.edu you would run something like:

     ssh -Y username@hulk.soic.indiana.edu

Once you are logged into the linux system, you can just run the GUI program of your choice (ie. matlab, mathematics, etc) and it will display on your Mac.

**Windows**
Install the Xming software.
If you have not already done so, download putty.exe from the PuTTY site and install it.
Run Xming on your PC to start the X server.  You should see the Xming icon in the taskbar if it is running (although you may have to click the little arrow in the taskbar to see it)
Run PuTTY and set things up as follows:

- Enter the server name in Host Name
- Make sure the Connection type is set to SSH
- Enable X11 forwarding (Connection > SSH > X11)

Log in using your normal IU username and passphrase
Once you are logged into the linux system, you can just run the GUI program of your choice (ie. matlab, mathematics, etc) and it will display on your PC.

[How do I run graphical programs remotely from a Linux server?](https://uisapp2.iu.edu/confluence-prd/pages/viewpage.action?pageId=280461906)

Write music using LaTeX
---
[How to write music with LaTeX](https://martin-thoma.com/how-to-write-music-with-latex)

How to use Anki
---
[A Guide on Using Anki Effectively](https://steviepoppe.net/blog/2016/09/a-quick-guide-on-using-anki-effectively-in-an-academic-context)
[Twenty rules of formulating knowledge](https://www.supermemo.com/en/archives1990-2015/articles/20rules)

Install Tex Live
-------
```
sudo apt install texlive-full
sudo apt install texmaker
```

Clear terminal by reinitialization
-----
```bash
tput reset
reset
```

