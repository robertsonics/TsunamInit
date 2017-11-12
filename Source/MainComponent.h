/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.3.0

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_9002020A4DD09B20__
#define __JUCE_HEADER_9002020A4DD09B20__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "Communicator.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MainComponent  : public Component,
                       public ChangeListener,
                       public ComboBoxListener,
                       public ButtonListener,
                       public SliderListener
{
public:
    //==============================================================================
    MainComponent ();
    ~MainComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

	void reset(void);
	void resetTrigger(void);
	int getTriggerNum(String tStr);
	int findTrigger(int t);
	bool insertTriggerString(void);
	String buildTriggerDesc(void);
	bool testTrigger(void);
	bool parseTriggerDesc(String tStr);
	void deleteInitString(int n);
	void updateInitWindow(void);
	void save(File saveFile);
	void open(File openFile);
	void changeListenerCallback(ChangeBroadcaster *);

    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged) override;
    void buttonClicked (Button* buttonThatWasClicked) override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.

	StringArray mInitStrings;

	Communicator *pCom;		// Our Communicator
	bool m_portOpenFlag;	// port open flag
	int m_portBoxItem;		// Current portBox item index

    //[/UserVariables]

    //==============================================================================
    ScopedPointer<GroupComponent> groupComponent2;
    ScopedPointer<GroupComponent> groupComponent4;
    ScopedPointer<GroupComponent> groupComponent3;
    ScopedPointer<GroupComponent> groupComponent;
    ScopedPointer<Label> statusBar;
    ScopedPointer<ComboBox> functionBox;
    ScopedPointer<ComboBox> typeBox;
    ScopedPointer<ToggleButton> invertToggle;
    ScopedPointer<ToggleButton> polyToggle;
    ScopedPointer<TextEditor> lowText;
    ScopedPointer<TextEditor> highText;
    ScopedPointer<TextButton> newButton;
    ScopedPointer<TextButton> openButton;
    ScopedPointer<TextButton> saveAsButton;
    ScopedPointer<Label> label2;
    ScopedPointer<Label> label3;
    ScopedPointer<Label> labelRange;
    ScopedPointer<ComboBox> baudBox;
    ScopedPointer<Label> label;
    ScopedPointer<Slider> vol1Slider;
    ScopedPointer<Label> label22;
    ScopedPointer<HyperlinkButton> linkButton;
    ScopedPointer<TextEditor> initText;
    ScopedPointer<ComboBox> triggerBox;
    ScopedPointer<ComboBox> interfaceBox;
    ScopedPointer<TextButton> addButton;
    ScopedPointer<TextButton> updateButton;
    ScopedPointer<TextButton> deleteButton;
    ScopedPointer<Label> label5;
    ScopedPointer<Label> label6;
    ScopedPointer<ToggleButton> retriggerToggle;
    ScopedPointer<TextButton> resetButton;
    ScopedPointer<Label> labelLow;
    ScopedPointer<Label> labelHigh;
    ScopedPointer<Label> label10;
    ScopedPointer<TextButton> testButton;
    ScopedPointer<ComboBox> portBox;
    ScopedPointer<Label> label11;
    ScopedPointer<ComboBox> testBaudBox;
    ScopedPointer<Label> label12;
    ScopedPointer<Slider> trigVolSlider;
    ScopedPointer<Label> labelTriggerVol;
    ScopedPointer<TextButton> stopButton;
    ScopedPointer<TextButton> copyButton;
    ScopedPointer<ToggleButton> velocityToggle;
    ScopedPointer<Slider> releaseSlider;
    ScopedPointer<Label> releaseText;
    ScopedPointer<ComboBox> pitchBox;
    ScopedPointer<Label> pitchText;
    ScopedPointer<ToggleButton> noteOffToggle;
    ScopedPointer<ToggleButton> loopToggle;
    ScopedPointer<ComboBox> outputBox;
    ScopedPointer<Label> labelOutput;
    ScopedPointer<Slider> vol2Slider;
    ScopedPointer<Label> label14;
    ScopedPointer<Slider> vol3Slider;
    ScopedPointer<Label> label15;
    ScopedPointer<Slider> vol4Slider;
    ScopedPointer<Label> label16;
    ScopedPointer<ToggleButton> lockToggle;
    ScopedPointer<ComboBox> channelBox;
    ScopedPointer<Label> channelText;
    ScopedPointer<ToggleButton> toggleOut1;
    ScopedPointer<ToggleButton> toggleOut2;
    ScopedPointer<ToggleButton> toggleOut3;
    ScopedPointer<ToggleButton> toggleOut4;
    ScopedPointer<Label> label17;
    ScopedPointer<Slider> vol5Slider;
    ScopedPointer<Label> labelOut5;
    ScopedPointer<Slider> vol6Slider;
    ScopedPointer<Label> labelOut6;
    ScopedPointer<Slider> vol7Slider;
    ScopedPointer<Label> labelOut7;
    ScopedPointer<Slider> vol8Slider;
    ScopedPointer<Label> labelOut8;
    ScopedPointer<ComboBox> modeBox;
    ScopedPointer<Label> label4;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_9002020A4DD09B20__
