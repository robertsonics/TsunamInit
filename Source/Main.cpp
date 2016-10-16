/*
  ==============================================================================

   WAV Trigger Init File Maker application in JUCE
   Copyright 2008 by Robertsonics.

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "MainComponent.h"

//==============================================================================
/**
    This is the top-level window that we'll pop up. Inside it, we'll create and
    show a component from the MainComponent.cpp file (you can open this file using
    the Jucer to edit it).
*/
class InitUtilWindow  : public DocumentWindow
{
public:
    //==============================================================================
    InitUtilWindow()
        : DocumentWindow ("Robertsonics : Tsunami Init File Editor v0.21",
                          Colours::lightgrey,
                          DocumentWindow::allButtons,
                          true)
    {
        // Create an instance of our main content component, and add it to our window..
        setContentOwned (new MainComponent(), true);

        // Centre the window on the screen
        centreWithSize (getWidth(), getHeight());

        // And show it!
        setVisible (true);
    }

    ~InitUtilWindow()
    {
        // (the content component will be deleted automatically, so no need to do it here)
    }

    //==============================================================================
    void closeButtonPressed()
    {
        // When the user presses the close button, we'll tell the app to quit. This
        // ComUtilWindow object will be deleted by the JUCEComUtilApplication class.
        JUCEApplication::quit();
    }
};

//==============================================================================
/** This is the application object that is started up when Juce starts. It handles
    the initialisation and shutdown of the whole application.
*/
class JUCEInitUtilApplication : public JUCEApplication
{
public:
    //==============================================================================
    JUCEInitUtilApplication() {}

    //==============================================================================
    void initialise (const String& commandLine)
    {
        // For this demo, we'll just create the main window...
        initUtilWindow = new InitUtilWindow();

        /*  ..and now return, which will fall into to the main event
            dispatch loop, and this will run until something calls
            JUCEAppliction::quit().

            In this case, JUCEAppliction::quit() will be called by the
            hello world window being clicked.
        */
    }

    void shutdown()
    {
        // This method is where you should clear-up your app's resources..

        // The comUtilWindow variable is a ScopedPointer, so setting it to a null
        // pointer will delete the window.
        initUtilWindow = nullptr;
    }

    //==============================================================================
    const String getApplicationName()
    {
        return "WAV Trigger Pro Init File Utility";
    }

    const String getApplicationVersion()
    {
        // The ProjectInfo::versionString value is automatically updated by the Jucer, and
        // can be found in the JuceHeader.h file that it generates for our project.
        return ProjectInfo::versionString;
    }

    bool moreThanOneInstanceAllowed()
    {
        return true;
    }

    void anotherInstanceStarted (const String& commandLine)
    {
    }

private:
    ScopedPointer<InitUtilWindow> initUtilWindow;
};


//==============================================================================
// This macro creates the application's main() function..
START_JUCE_APPLICATION (JUCEInitUtilApplication)
