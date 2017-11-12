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

//[Headers] You can add your own extra header files here...
#include "Serial.h"
#include "Communicator.h"
#include "Commands.h"
//[/Headers]

#include "MainComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MainComponent::MainComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (groupComponent2 = new GroupComponent ("new group",
                                                             TRANS("System")));
    groupComponent2->setColour (GroupComponent::textColourId, Colour (0xff363636));

    addAndMakeVisible (groupComponent4 = new GroupComponent ("new group",
                                                             TRANS("MIDI")));
    groupComponent4->setColour (GroupComponent::textColourId, Colour (0xff363636));

    addAndMakeVisible (groupComponent3 = new GroupComponent ("new group",
                                                             TRANS("Trigger Test COM Port (optional)")));
    groupComponent3->setColour (GroupComponent::textColourId, Colour (0xff363636));

    addAndMakeVisible (groupComponent = new GroupComponent ("new group",
                                                            TRANS("Trigger Settings")));
    groupComponent->setColour (GroupComponent::outlineColourId, Colour (0x66000000));
    groupComponent->setColour (GroupComponent::textColourId, Colour (0xff363636));

    addAndMakeVisible (statusBar = new Label ("new label",
                                              String()));
    statusBar->setFont (Font (15.00f, Font::plain));
    statusBar->setJustificationType (Justification::centredLeft);
    statusBar->setEditable (false, false, false);
    statusBar->setColour (Label::backgroundColourId, Colour (0xff9c9c9c));
    statusBar->setColour (Label::textColourId, Colours::black);
    statusBar->setColour (Label::outlineColourId, Colour (0x00000000));
    statusBar->setColour (TextEditor::textColourId, Colours::black);
    statusBar->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (functionBox = new ComboBox ("function box"));
    functionBox->setEditableText (false);
    functionBox->setJustificationType (Justification::centredLeft);
    functionBox->setTextWhenNothingSelected (String());
    functionBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    functionBox->addListener (this);

    addAndMakeVisible (typeBox = new ComboBox ("type box"));
    typeBox->setEditableText (false);
    typeBox->setJustificationType (Justification::centredLeft);
    typeBox->setTextWhenNothingSelected (String());
    typeBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    typeBox->addListener (this);

    addAndMakeVisible (invertToggle = new ToggleButton ("invert toggle"));
    invertToggle->setButtonText (TRANS("Invert"));
    invertToggle->addListener (this);

    addAndMakeVisible (polyToggle = new ToggleButton ("poly toggle"));
    polyToggle->setButtonText (TRANS("Polyphonic"));
    polyToggle->addListener (this);

    addAndMakeVisible (lowText = new TextEditor ("low text"));
    lowText->setMultiLine (false);
    lowText->setReturnKeyStartsNewLine (false);
    lowText->setReadOnly (false);
    lowText->setScrollbarsShown (false);
    lowText->setCaretVisible (true);
    lowText->setPopupMenuEnabled (true);
    lowText->setText (String());

    addAndMakeVisible (highText = new TextEditor ("high text"));
    highText->setMultiLine (false);
    highText->setReturnKeyStartsNewLine (false);
    highText->setReadOnly (false);
    highText->setScrollbarsShown (false);
    highText->setCaretVisible (true);
    highText->setPopupMenuEnabled (true);
    highText->setText (String());

    addAndMakeVisible (newButton = new TextButton ("new button"));
    newButton->setButtonText (TRANS("New"));
    newButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    newButton->addListener (this);

    addAndMakeVisible (openButton = new TextButton ("open button"));
    openButton->setButtonText (TRANS("Open"));
    openButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    openButton->addListener (this);

    addAndMakeVisible (saveAsButton = new TextButton ("save as button"));
    saveAsButton->setButtonText (TRANS("Save As"));
    saveAsButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    saveAsButton->addListener (this);

    addAndMakeVisible (label2 = new Label ("new label",
                                           TRANS("Function")));
    label2->setFont (Font (15.00f, Font::plain));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label3 = new Label ("new label",
                                           TRANS("Type")));
    label3->setFont (Font (15.00f, Font::plain));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (labelRange = new Label ("new label",
                                               TRANS("Track Range")));
    labelRange->setFont (Font (15.00f, Font::plain));
    labelRange->setJustificationType (Justification::centredLeft);
    labelRange->setEditable (false, false, false);
    labelRange->setColour (TextEditor::textColourId, Colours::black);
    labelRange->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (baudBox = new ComboBox ("baud box"));
    baudBox->setEditableText (false);
    baudBox->setJustificationType (Justification::centredLeft);
    baudBox->setTextWhenNothingSelected (String());
    baudBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    baudBox->addListener (this);

    addAndMakeVisible (label = new Label ("new label",
                                          TRANS("Serial Com:\n")));
    label->setFont (Font (15.00f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (vol1Slider = new Slider ("volume slider"));
    vol1Slider->setRange (-20, 10, 1);
    vol1Slider->setSliderStyle (Slider::LinearHorizontal);
    vol1Slider->setTextBoxStyle (Slider::TextBoxRight, false, 40, 20);
    vol1Slider->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    vol1Slider->addListener (this);

    addAndMakeVisible (label22 = new Label ("new label",
                                            TRANS("Output 1 Volume (dB)")));
    label22->setFont (Font (15.00f, Font::plain));
    label22->setJustificationType (Justification::centredLeft);
    label22->setEditable (false, false, false);
    label22->setColour (TextEditor::textColourId, Colours::black);
    label22->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (linkButton = new HyperlinkButton (TRANS("Help"),
                                                         URL ("http://robertsonics.com/wav-trigger-online-user-guide/")));
    linkButton->setTooltip (TRANS("http://robertsonics.com/wav-trigger-online-user-guide/"));
    linkButton->setButtonText (TRANS("Help"));
    linkButton->addListener (this);
    linkButton->setColour (HyperlinkButton::textColourId, Colours::blue);

    addAndMakeVisible (initText = new TextEditor ("init text editor"));
    initText->setMultiLine (true);
    initText->setReturnKeyStartsNewLine (true);
    initText->setReadOnly (false);
    initText->setScrollbarsShown (true);
    initText->setCaretVisible (true);
    initText->setPopupMenuEnabled (true);
    initText->setText (String());

    addAndMakeVisible (triggerBox = new ComboBox ("trigger combo box"));
    triggerBox->setEditableText (false);
    triggerBox->setJustificationType (Justification::centredLeft);
    triggerBox->setTextWhenNothingSelected (String());
    triggerBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    triggerBox->addListener (this);

    addAndMakeVisible (interfaceBox = new ComboBox ("interface combo box"));
    interfaceBox->setEditableText (false);
    interfaceBox->setJustificationType (Justification::centredLeft);
    interfaceBox->setTextWhenNothingSelected (String());
    interfaceBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    interfaceBox->addListener (this);

    addAndMakeVisible (addButton = new TextButton ("add button"));
    addButton->setButtonText (TRANS("Add"));
    addButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    addButton->addListener (this);

    addAndMakeVisible (updateButton = new TextButton ("update button"));
    updateButton->setButtonText (TRANS("Update"));
    updateButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    updateButton->addListener (this);

    addAndMakeVisible (deleteButton = new TextButton ("delete button"));
    deleteButton->setButtonText (TRANS("Delete"));
    deleteButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    deleteButton->addListener (this);

    addAndMakeVisible (label5 = new Label ("new label",
                                           TRANS("Trigger")));
    label5->setFont (Font (15.00f, Font::plain));
    label5->setJustificationType (Justification::centredLeft);
    label5->setEditable (false, false, false);
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label6 = new Label ("new label",
                                           TRANS("Hardware Interface")));
    label6->setFont (Font (15.00f, Font::plain));
    label6->setJustificationType (Justification::centredLeft);
    label6->setEditable (false, false, false);
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (retriggerToggle = new ToggleButton ("retrigger toggle button"));
    retriggerToggle->setButtonText (TRANS("Re-Triggers"));
    retriggerToggle->addListener (this);

    addAndMakeVisible (resetButton = new TextButton ("reset button"));
    resetButton->setButtonText (TRANS("Reset"));
    resetButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    resetButton->addListener (this);

    addAndMakeVisible (labelLow = new Label ("new label",
                                             TRANS("Low")));
    labelLow->setFont (Font (15.00f, Font::plain));
    labelLow->setJustificationType (Justification::centredLeft);
    labelLow->setEditable (false, false, false);
    labelLow->setColour (TextEditor::textColourId, Colours::black);
    labelLow->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (labelHigh = new Label ("new label",
                                              TRANS("High")));
    labelHigh->setFont (Font (15.00f, Font::plain));
    labelHigh->setJustificationType (Justification::centredLeft);
    labelHigh->setEditable (false, false, false);
    labelHigh->setColour (TextEditor::textColourId, Colours::black);
    labelHigh->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label10 = new Label ("new label",
                                            TRANS("Init File Contents:")));
    label10->setFont (Font (15.00f, Font::plain));
    label10->setJustificationType (Justification::centredLeft);
    label10->setEditable (false, false, false);
    label10->setColour (Label::textColourId, Colours::black);
    label10->setColour (TextEditor::textColourId, Colours::black);
    label10->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (testButton = new TextButton ("delete button"));
    testButton->setButtonText (TRANS("Test"));
    testButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    testButton->addListener (this);
    testButton->setColour (TextButton::buttonColourId, Colour (0xffd00009));

    addAndMakeVisible (portBox = new ComboBox ("new combo box"));
    portBox->setEditableText (false);
    portBox->setJustificationType (Justification::centredLeft);
    portBox->setTextWhenNothingSelected (String());
    portBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    portBox->addListener (this);

    addAndMakeVisible (label11 = new Label ("new label",
                                            TRANS("Port:")));
    label11->setFont (Font (15.00f, Font::plain));
    label11->setJustificationType (Justification::centredLeft);
    label11->setEditable (false, false, false);
    label11->setColour (TextEditor::textColourId, Colours::black);
    label11->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (testBaudBox = new ComboBox ("new combo box"));
    testBaudBox->setEditableText (false);
    testBaudBox->setJustificationType (Justification::centredLeft);
    testBaudBox->setTextWhenNothingSelected (String());
    testBaudBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    testBaudBox->addListener (this);

    addAndMakeVisible (label12 = new Label ("new label",
                                            TRANS("Baudrate:")));
    label12->setFont (Font (15.00f, Font::plain));
    label12->setJustificationType (Justification::centredLeft);
    label12->setEditable (false, false, false);
    label12->setColour (TextEditor::textColourId, Colours::black);
    label12->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (trigVolSlider = new Slider ("trig volume slider"));
    trigVolSlider->setRange (-20, 10, 1);
    trigVolSlider->setSliderStyle (Slider::LinearHorizontal);
    trigVolSlider->setTextBoxStyle (Slider::TextBoxRight, false, 40, 20);
    trigVolSlider->addListener (this);

    addAndMakeVisible (labelTriggerVol = new Label ("new label",
                                                    TRANS("Trigger Volume (dB)")));
    labelTriggerVol->setFont (Font (15.00f, Font::plain));
    labelTriggerVol->setJustificationType (Justification::centredLeft);
    labelTriggerVol->setEditable (false, false, false);
    labelTriggerVol->setColour (TextEditor::textColourId, Colours::black);
    labelTriggerVol->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (stopButton = new TextButton ("stop button"));
    stopButton->setButtonText (TRANS("StopAll"));
    stopButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    stopButton->addListener (this);

    addAndMakeVisible (copyButton = new TextButton ("copy button"));
    copyButton->setButtonText (TRANS("Copy"));
    copyButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    copyButton->addListener (this);

    addAndMakeVisible (velocityToggle = new ToggleButton ("velocity toggle button"));
    velocityToggle->setButtonText (TRANS("Ignore Velocity"));
    velocityToggle->addListener (this);

    addAndMakeVisible (releaseSlider = new Slider ("release slider"));
    releaseSlider->setRange (0, 127, 1);
    releaseSlider->setSliderStyle (Slider::LinearHorizontal);
    releaseSlider->setTextBoxStyle (Slider::TextBoxRight, false, 40, 20);
    releaseSlider->addListener (this);

    addAndMakeVisible (releaseText = new Label ("new label",
                                                TRANS("Default Release (msec)")));
    releaseText->setFont (Font (15.00f, Font::plain));
    releaseText->setJustificationType (Justification::centredLeft);
    releaseText->setEditable (false, false, false);
    releaseText->setColour (TextEditor::textColourId, Colours::black);
    releaseText->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (pitchBox = new ComboBox ("pitch box"));
    pitchBox->setEditableText (false);
    pitchBox->setJustificationType (Justification::centredLeft);
    pitchBox->setTextWhenNothingSelected (String());
    pitchBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    pitchBox->addListener (this);

    addAndMakeVisible (pitchText = new Label ("new label",
                                              TRANS("Pitch Bend\n"
                                              "Semitones")));
    pitchText->setFont (Font (15.00f, Font::plain));
    pitchText->setJustificationType (Justification::centredLeft);
    pitchText->setEditable (false, false, false);
    pitchText->setColour (TextEditor::textColourId, Colours::black);
    pitchText->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (noteOffToggle = new ToggleButton ("noteOff toggle button"));
    noteOffToggle->setButtonText (TRANS("Ignore Note-Offs"));
    noteOffToggle->addListener (this);

    addAndMakeVisible (loopToggle = new ToggleButton ("new toggle button"));
    loopToggle->setButtonText (TRANS("Loop"));
    loopToggle->addListener (this);

    addAndMakeVisible (outputBox = new ComboBox ("trigger combo box"));
    outputBox->setEditableText (false);
    outputBox->setJustificationType (Justification::centredLeft);
    outputBox->setTextWhenNothingSelected (String());
    outputBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    outputBox->addListener (this);

    addAndMakeVisible (labelOutput = new Label ("new label",
                                                String()));
    labelOutput->setFont (Font (15.00f, Font::plain));
    labelOutput->setJustificationType (Justification::centredLeft);
    labelOutput->setEditable (false, false, false);
    labelOutput->setColour (TextEditor::textColourId, Colours::black);
    labelOutput->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (vol2Slider = new Slider ("volume slider"));
    vol2Slider->setRange (-20, 10, 1);
    vol2Slider->setSliderStyle (Slider::LinearHorizontal);
    vol2Slider->setTextBoxStyle (Slider::TextBoxRight, false, 40, 20);
    vol2Slider->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    vol2Slider->addListener (this);

    addAndMakeVisible (label14 = new Label ("new label",
                                            TRANS("Output 2 Volume (dB)")));
    label14->setFont (Font (15.00f, Font::plain));
    label14->setJustificationType (Justification::centredLeft);
    label14->setEditable (false, false, false);
    label14->setColour (TextEditor::textColourId, Colours::black);
    label14->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (vol3Slider = new Slider ("volume slider"));
    vol3Slider->setRange (-20, 10, 1);
    vol3Slider->setSliderStyle (Slider::LinearHorizontal);
    vol3Slider->setTextBoxStyle (Slider::TextBoxRight, false, 40, 20);
    vol3Slider->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    vol3Slider->addListener (this);

    addAndMakeVisible (label15 = new Label ("new label",
                                            TRANS("Output 3 Volume (dB)")));
    label15->setFont (Font (15.00f, Font::plain));
    label15->setJustificationType (Justification::centredLeft);
    label15->setEditable (false, false, false);
    label15->setColour (TextEditor::textColourId, Colours::black);
    label15->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (vol4Slider = new Slider ("volume slider"));
    vol4Slider->setRange (-20, 10, 1);
    vol4Slider->setSliderStyle (Slider::LinearHorizontal);
    vol4Slider->setTextBoxStyle (Slider::TextBoxRight, false, 40, 20);
    vol4Slider->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    vol4Slider->addListener (this);

    addAndMakeVisible (label16 = new Label ("new label",
                                            TRANS("Output 4 Volume (dB)")));
    label16->setFont (Font (15.00f, Font::plain));
    label16->setJustificationType (Justification::centredLeft);
    label16->setEditable (false, false, false);
    label16->setColour (TextEditor::textColourId, Colours::black);
    label16->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (lockToggle = new ToggleButton ("lock toggle"));
    lockToggle->setButtonText (TRANS("Lock Voice"));
    lockToggle->addListener (this);

    addAndMakeVisible (channelBox = new ComboBox ("channel box"));
    channelBox->setEditableText (false);
    channelBox->setJustificationType (Justification::centredLeft);
    channelBox->setTextWhenNothingSelected (String());
    channelBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    channelBox->addListener (this);

    addAndMakeVisible (channelText = new Label ("channel Text",
                                                TRANS("Channel:")));
    channelText->setFont (Font (15.00f, Font::plain));
    channelText->setJustificationType (Justification::centredLeft);
    channelText->setEditable (false, false, false);
    channelText->setColour (TextEditor::textColourId, Colours::black);
    channelText->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (toggleOut1 = new ToggleButton ("new toggle button"));
    toggleOut1->setButtonText (TRANS("1/2"));
    toggleOut1->addListener (this);

    addAndMakeVisible (toggleOut2 = new ToggleButton ("new toggle button"));
    toggleOut2->setButtonText (TRANS("3/4"));
    toggleOut2->addListener (this);

    addAndMakeVisible (toggleOut3 = new ToggleButton ("new toggle button"));
    toggleOut3->setButtonText (TRANS("5/6"));
    toggleOut3->addListener (this);

    addAndMakeVisible (toggleOut4 = new ToggleButton ("new toggle button"));
    toggleOut4->setButtonText (TRANS("7/8"));
    toggleOut4->addListener (this);

    addAndMakeVisible (label17 = new Label ("new label",
                                            TRANS("Audio IN mixed to OUT:")));
    label17->setFont (Font (15.00f, Font::plain));
    label17->setJustificationType (Justification::centredLeft);
    label17->setEditable (false, false, false);
    label17->setColour (TextEditor::textColourId, Colours::black);
    label17->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (vol5Slider = new Slider ("volume slider"));
    vol5Slider->setRange (-20, 10, 1);
    vol5Slider->setSliderStyle (Slider::LinearHorizontal);
    vol5Slider->setTextBoxStyle (Slider::TextBoxRight, false, 40, 20);
    vol5Slider->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    vol5Slider->addListener (this);

    addAndMakeVisible (labelOut5 = new Label ("new label",
                                              TRANS("Output 5 Volume (dB)")));
    labelOut5->setFont (Font (15.00f, Font::plain));
    labelOut5->setJustificationType (Justification::centredLeft);
    labelOut5->setEditable (false, false, false);
    labelOut5->setColour (TextEditor::textColourId, Colours::black);
    labelOut5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (vol6Slider = new Slider ("volume slider"));
    vol6Slider->setRange (-20, 10, 1);
    vol6Slider->setSliderStyle (Slider::LinearHorizontal);
    vol6Slider->setTextBoxStyle (Slider::TextBoxRight, false, 40, 20);
    vol6Slider->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    vol6Slider->addListener (this);

    addAndMakeVisible (labelOut6 = new Label ("new label",
                                              TRANS("Output 6 Volume (dB)")));
    labelOut6->setFont (Font (15.00f, Font::plain));
    labelOut6->setJustificationType (Justification::centredLeft);
    labelOut6->setEditable (false, false, false);
    labelOut6->setColour (TextEditor::textColourId, Colours::black);
    labelOut6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (vol7Slider = new Slider ("volume slider"));
    vol7Slider->setRange (-20, 10, 1);
    vol7Slider->setSliderStyle (Slider::LinearHorizontal);
    vol7Slider->setTextBoxStyle (Slider::TextBoxRight, false, 40, 20);
    vol7Slider->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    vol7Slider->addListener (this);

    addAndMakeVisible (labelOut7 = new Label ("new label",
                                              TRANS("Output 7 Volume (dB)")));
    labelOut7->setFont (Font (15.00f, Font::plain));
    labelOut7->setJustificationType (Justification::centredLeft);
    labelOut7->setEditable (false, false, false);
    labelOut7->setColour (TextEditor::textColourId, Colours::black);
    labelOut7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (vol8Slider = new Slider ("volume slider"));
    vol8Slider->setRange (-20, 10, 1);
    vol8Slider->setSliderStyle (Slider::LinearHorizontal);
    vol8Slider->setTextBoxStyle (Slider::TextBoxRight, false, 40, 20);
    vol8Slider->setColour (Slider::rotarySliderFillColourId, Colour (0x7f000000));
    vol8Slider->addListener (this);

    addAndMakeVisible (labelOut8 = new Label ("new label",
                                              TRANS("Output 8 Volume (dB)")));
    labelOut8->setFont (Font (15.00f, Font::plain));
    labelOut8->setJustificationType (Justification::centredLeft);
    labelOut8->setEditable (false, false, false);
    labelOut8->setColour (TextEditor::textColourId, Colours::black);
    labelOut8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (modeBox = new ComboBox ("new combo box"));
    modeBox->setEditableText (false);
    modeBox->setJustificationType (Justification::centredLeft);
    modeBox->setTextWhenNothingSelected (String());
    modeBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    modeBox->addListener (this);

    addAndMakeVisible (label4 = new Label ("new label",
                                           TRANS("Mode:")));
    label4->setFont (Font (15.00f, Font::plain));
    label4->setJustificationType (Justification::centredLeft);
    label4->setEditable (false, false, false);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (1024, 700);


    //[Constructor] You can add your own custom stuff here..

	testButton->setEnabled(false);

	modeBox->addItem("Stereo", 1);
	modeBox->addItem("Mono", 2);
	modeBox->setSelectedId(1, dontSendNotification);

	testBaudBox->addItem("1200 bps", 1);
	testBaudBox->addItem("2400 bps", 2);
	testBaudBox->addItem("9600 bps", 3);
	testBaudBox->addItem("19.2 kbps", 4);
	testBaudBox->addItem("38.4 kbps", 5);
	testBaudBox->addItem("57.6 kbps", 6);
	testBaudBox->setSelectedId(6);

	// For now, disable baudrate selection
	testBaudBox->setEnabled(false);

	baudBox->addItem("1200 bps", 1);
	baudBox->addItem("2400 bps", 2);
	baudBox->addItem("9600 bps", 3);
	baudBox->addItem("19.2 kbps", 4);
	baudBox->addItem("38.4 kbps", 5);
	baudBox->addItem("57.6 kbps", 6);

	pitchBox->addItem("1", 1);
	pitchBox->addItem("2", 2);
	pitchBox->addItem("3", 3);
	pitchBox->addItem("4", 4);
	pitchBox->addItem("5", 5);

	channelBox->addItem("Omni", 1);
	channelBox->addItem("1", 2);
	channelBox->addItem("2", 3);
	channelBox->addItem("3", 4);
	channelBox->addItem("4", 5);
	channelBox->addItem("5", 6);
	channelBox->addItem("6", 7);
	channelBox->addItem("7", 8);
	channelBox->addItem("8", 9);
	channelBox->addItem("9", 10);
	channelBox->addItem("10", 11);
	channelBox->addItem("11", 12);
	channelBox->addItem("12", 13);
	channelBox->addItem("13", 14);
	channelBox->addItem("14", 15);
	channelBox->addItem("15", 16);
	channelBox->addItem("16", 17);

	String st;
	for (int i = 1; i < 17; i++) {
		st = "";
		st += i;
		triggerBox->addItem(st.toStdString(), i);
	}

	interfaceBox->addItem("Contact Closure", 1);
	interfaceBox->addItem("Active (3.3V)", 2);

	functionBox->addItem("Normal", 1);
	functionBox->addItem("Next", 2);
	functionBox->addItem("Previous", 3);
	functionBox->addItem("Random", 4);
	functionBox->addItem("Pause", 5);
	functionBox->addItem("Resume", 6);
	functionBox->addItem("Stop", 7);
	functionBox->addItem("Volume Up", 8);
	functionBox->addItem("Volume Dn", 9);
	functionBox->addItem("MIDI Bank Up", 10);
	functionBox->addItem("MIDI Bank Dn", 11);
	functionBox->addItem("Trig Bank Up", 12);
	functionBox->addItem("Trig Bank Dn", 13);
	functionBox->addItem("Synced Pair", 14);
	functionBox->setItemEnabled(14, false);

	typeBox->addItem("Edge", 1);
	typeBox->addItem("Level", 2);
	typeBox->addItem("Latch", 3);

	labelOutput->setText("Stereo Output", dontSendNotification);
	outputBox->addItem("1", 1);
	outputBox->addItem("2", 2);
	outputBox->addItem("3", 3);
	outputBox->addItem("4", 4);
	outputBox->addItem("5", 5);
	outputBox->addItem("6", 6);
	outputBox->addItem("7", 7);
	outputBox->addItem("8", 8);

	outputBox->setItemEnabled(5, false);
	outputBox->setItemEnabled(6, false);
	outputBox->setItemEnabled(7, false);
	outputBox->setItemEnabled(8, false);

	lowText->setInputRestrictions(4, "0123456789");
	highText->setInputRestrictions(4, "0123456789");

	labelOut5->setEnabled(false);
	vol5Slider->setEnabled(false);
	labelOut6->setEnabled(false);
	vol6Slider->setEnabled(false);
	labelOut7->setEnabled(false);
	vol7Slider->setEnabled(false);
	labelOut8->setEnabled(false);
	vol8Slider->setEnabled(false);

	Font font;
	font.setTypefaceName(Font::getDefaultMonospacedFontName());
	font.setSizeAndStyle(11.0f, 0, 1.0f, 0.0f);
	initText->setFont(font);

	reset();

	pCom = new Communicator();
	pCom->addChangeListener(this);

    StringPairArray portlist = SerialPort::getSerialPortPaths();
	int j = 0;
	if(portlist.size()) {
		for (int i = 0; i < portlist.size(); i++) {

#ifdef WIN32
			if (portlist.getAllKeys()[i].contains("COM")) {
				j++;
				portBox->addItem(portlist.getAllKeys()[i], j);
            }
#else
            if (portlist.getAllKeys()[i].contains("usbserial")) {
				j++;
				portBox->addItem(portlist.getAllValues()[i], j);
			}
#endif
		}
	}

	if (j > 0) {

		// Use the first port to create a Communicator
		// SerialPort * pSP = new SerialPort(portlist.getAllValues()[0], SerialPortConfig(9600, 8, SerialPortConfig::SERIALPORT_PARITY_NONE, SerialPortConfig::STOPBITS_1, SerialPortConfig::FLOWCONTROL_NONE));
		m_portBoxItem = 1;
		portBox->setSelectedId(m_portBoxItem);
		String pN = portBox->getText();
		if (pCom->openPort(pN)) {
			statusBar->setText("  >COM port opened successfully", dontSendNotification);
			m_portOpenFlag = true;
			stopButton->setEnabled(true);
		}
		else {
			statusBar->setText("  >COM port could not be opened!", dontSendNotification);
			m_portOpenFlag = false;
			stopButton->setEnabled(false);
		}
	}
	else {
		portBox->addItem("No USB Serial Devices!", 1);
		m_portBoxItem = 1;
		portBox->setSelectedId(m_portBoxItem);
		statusBar->setText("  >No compatible COM ports found", dontSendNotification);
		m_portOpenFlag = false;
		stopButton->setEnabled(false);
	}

    //[/Constructor]
}

MainComponent::~MainComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
	if (pCom != nullptr) {
		pCom->closePort();
		pCom->removeChangeListener(this);
		delete pCom;
	}
    //[/Destructor_pre]

    groupComponent2 = nullptr;
    groupComponent4 = nullptr;
    groupComponent3 = nullptr;
    groupComponent = nullptr;
    statusBar = nullptr;
    functionBox = nullptr;
    typeBox = nullptr;
    invertToggle = nullptr;
    polyToggle = nullptr;
    lowText = nullptr;
    highText = nullptr;
    newButton = nullptr;
    openButton = nullptr;
    saveAsButton = nullptr;
    label2 = nullptr;
    label3 = nullptr;
    labelRange = nullptr;
    baudBox = nullptr;
    label = nullptr;
    vol1Slider = nullptr;
    label22 = nullptr;
    linkButton = nullptr;
    initText = nullptr;
    triggerBox = nullptr;
    interfaceBox = nullptr;
    addButton = nullptr;
    updateButton = nullptr;
    deleteButton = nullptr;
    label5 = nullptr;
    label6 = nullptr;
    retriggerToggle = nullptr;
    resetButton = nullptr;
    labelLow = nullptr;
    labelHigh = nullptr;
    label10 = nullptr;
    testButton = nullptr;
    portBox = nullptr;
    label11 = nullptr;
    testBaudBox = nullptr;
    label12 = nullptr;
    trigVolSlider = nullptr;
    labelTriggerVol = nullptr;
    stopButton = nullptr;
    copyButton = nullptr;
    velocityToggle = nullptr;
    releaseSlider = nullptr;
    releaseText = nullptr;
    pitchBox = nullptr;
    pitchText = nullptr;
    noteOffToggle = nullptr;
    loopToggle = nullptr;
    outputBox = nullptr;
    labelOutput = nullptr;
    vol2Slider = nullptr;
    label14 = nullptr;
    vol3Slider = nullptr;
    label15 = nullptr;
    vol4Slider = nullptr;
    label16 = nullptr;
    lockToggle = nullptr;
    channelBox = nullptr;
    channelText = nullptr;
    toggleOut1 = nullptr;
    toggleOut2 = nullptr;
    toggleOut3 = nullptr;
    toggleOut4 = nullptr;
    label17 = nullptr;
    vol5Slider = nullptr;
    labelOut5 = nullptr;
    vol6Slider = nullptr;
    labelOut6 = nullptr;
    vol7Slider = nullptr;
    labelOut7 = nullptr;
    vol8Slider = nullptr;
    labelOut8 = nullptr;
    modeBox = nullptr;
    label4 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff828282));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MainComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    groupComponent2->setBounds (32, 16, 409, 384);
    groupComponent4->setBounds (32, 413, 408, 195);
    groupComponent3->setBounds (465, 300, 526, 76);
    groupComponent->setBounds (465, 16, 526, 268);
    statusBar->setBounds (0, getHeight() - 24, proportionOfWidth (1.0000f), 24);
    functionBox->setBounds (846, 62, 112, 24);
    typeBox->setBounds (731, 62, 98, 24);
    invertToggle->setBounds (494, 115, 65, 24);
    polyToggle->setBounds (668, 115, 96, 24);
    lowText->setBounds (847, 117, 44, 20);
    highText->setBounds (913, 117, 44, 20);
    newButton->setBounds (203, 630, 63, 24);
    openButton->setBounds (41, 630, 63, 24);
    saveAsButton->setBounds (123, 630, 63, 24);
    label2->setBounds (840, 39, 63, 24);
    label3->setBounds (726, 38, 47, 24);
    labelRange->setBounds (840, 94, 87, 24);
    baudBox->setBounds (143, 46, 148, 24);
    label->setBounds (57, 46, 105, 24);
    vol1Slider->setBounds (59, 162, 160, 24);
    label22->setBounds (58, 140, 150, 24);
    linkButton->setBounds (386, 632, 68, 24);
    initText->setBounds (470, 408, 520, 248);
    triggerBox->setBounds (498, 62, 56, 24);
    interfaceBox->setBounds (571, 62, 143, 24);
    addButton->setBounds (576, 235, 63, 24);
    updateButton->setBounds (655, 235, 63, 24);
    deleteButton->setBounds (734, 235, 63, 24);
    label5->setBounds (492, 38, 56, 24);
    label6->setBounds (565, 38, 141, 24);
    retriggerToggle->setBounds (564, 115, 95, 24);
    resetButton->setBounds (497, 235, 63, 24);
    labelLow->setBounds (842, 135, 40, 24);
    labelHigh->setBounds (908, 136, 40, 24);
    label10->setBounds (465, 385, 125, 24);
    testButton->setBounds (894, 235, 63, 24);
    portBox->setBounds (545, 332, 208, 24);
    label11->setBounds (497, 332, 48, 24);
    testBaudBox->setBounds (854, 332, 104, 24);
    label12->setBounds (781, 333, 72, 24);
    trigVolSlider->setBounds (629, 183, 140, 24);
    labelTriggerVol->setBounds (495, 182, 150, 24);
    stopButton->setBounds (283, 630, 63, 24);
    copyButton->setBounds (813, 235, 63, 24);
    velocityToggle->setBounds (59, 538, 125, 24);
    releaseSlider->setBounds (60, 504, 160, 24);
    releaseText->setBounds (58, 482, 155, 24);
    pitchBox->setBounds (331, 442, 58, 24);
    pitchText->setBounds (249, 434, 80, 40);
    noteOffToggle->setBounds (59, 564, 150, 24);
    loopToggle->setBounds (767, 116, 62, 24);
    outputBox->setBounds (901, 183, 56, 24);
    labelOutput->setBounds (805, 183, 94, 24);
    vol2Slider->setBounds (59, 206, 160, 24);
    label14->setBounds (59, 185, 150, 24);
    vol3Slider->setBounds (59, 251, 160, 24);
    label15->setBounds (58, 229, 150, 24);
    vol4Slider->setBounds (59, 296, 160, 24);
    label16->setBounds (59, 275, 150, 24);
    lockToggle->setBounds (494, 147, 107, 24);
    channelBox->setBounds (125, 441, 96, 24);
    channelText->setBounds (58, 441, 67, 24);
    toggleOut1->setBounds (76, 357, 49, 24);
    toggleOut2->setBounds (136, 357, 49, 24);
    toggleOut3->setBounds (194, 357, 48, 24);
    toggleOut4->setBounds (251, 357, 58, 24);
    label17->setBounds (60, 334, 166, 24);
    vol5Slider->setBounds (244, 163, 160, 24);
    labelOut5->setBounds (243, 141, 150, 24);
    vol6Slider->setBounds (244, 207, 160, 24);
    labelOut6->setBounds (244, 186, 150, 24);
    vol7Slider->setBounds (244, 252, 160, 24);
    labelOut7->setBounds (243, 230, 150, 24);
    vol8Slider->setBounds (244, 297, 160, 24);
    labelOut8->setBounds (244, 276, 150, 24);
    modeBox->setBounds (143, 96, 148, 24);
    label4->setBounds (91, 95, 54, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MainComponent::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == functionBox)
    {
        //[UserComboBoxCode_functionBox] -- add your combo box handling code here..

		int f = functionBox->getSelectedId();
		switch (f) {
			case 1: // Normal
				lowText->setText("", dontSendNotification);
				lowText->setEnabled(false);
				highText->setText("", dontSendNotification);
				highText->setEnabled(false);
				labelRange->setEnabled(false);
				labelLow->setEnabled(false);
				labelHigh->setEnabled(false);
				retriggerToggle->setEnabled(true);
				retriggerToggle->setToggleState(true, dontSendNotification);
				polyToggle->setEnabled(true);
				polyToggle->setToggleState(true, dontSendNotification);
				typeBox->setSelectedId(1);
				typeBox->setEnabled(true);
				trigVolSlider->setValue(0);
				trigVolSlider->setEnabled(true);
				loopToggle->setEnabled(true);
				loopToggle->setToggleState(false, dontSendNotification);
				lockToggle->setEnabled(true);
				lockToggle->setToggleState(true, dontSendNotification);
				outputBox->setEnabled(true);
				outputBox->setSelectedId(1);
				labelOutput->setEnabled(true);
				labelTriggerVol->setEnabled(true);
			break;
			case 2: // Next
			case 3: // Previous
			case 4: // Random
				lowText->setText("1", dontSendNotification);
				lowText->setEnabled(true);
				highText->setText("16", dontSendNotification);
				highText->setEnabled(true);
				labelRange->setEnabled(true);
				labelLow->setEnabled(true);
				labelHigh->setEnabled(true);
				retriggerToggle->setEnabled(true);
				retriggerToggle->setToggleState(true, dontSendNotification);
				polyToggle->setEnabled(true);
				polyToggle->setToggleState(true, dontSendNotification);
				typeBox->setSelectedId(1);
				typeBox->setEnabled(true);
				trigVolSlider->setValue(0);
				trigVolSlider->setEnabled(true);
				loopToggle->setEnabled(true);
				loopToggle->setToggleState(false, dontSendNotification);
				lockToggle->setEnabled(true);
				lockToggle->setToggleState(true, dontSendNotification);
				outputBox->setEnabled(true);
				outputBox->setSelectedId(1);
				labelOutput->setEnabled(true);
				labelTriggerVol->setEnabled(true);
			break;
			case 5:	// Pause
			case 6: // Resume
				lowText->setText("1", dontSendNotification);
				lowText->setEnabled(true);
				highText->setText("16", dontSendNotification);
				highText->setEnabled(true);
				labelRange->setEnabled(true);
				labelLow->setEnabled(true);
				labelHigh->setEnabled(true);
				retriggerToggle->setEnabled(false);
				retriggerToggle->setToggleState(false, dontSendNotification);
				polyToggle->setEnabled(false);
				polyToggle->setToggleState(false, dontSendNotification);
				typeBox->setSelectedId(1);
				typeBox->setEnabled(true);
				trigVolSlider->setValue(0);
				trigVolSlider->setEnabled(false);
				loopToggle->setEnabled(false);
				loopToggle->setToggleState(false, dontSendNotification);
				lockToggle->setEnabled(false);
				lockToggle->setToggleState(false, dontSendNotification);
				outputBox->setEnabled(false);
				outputBox->setSelectedId(1);
				labelOutput->setEnabled(false);
				labelTriggerVol->setEnabled(false);
			break;
			case 7:	// Stop
				lowText->setText("1", dontSendNotification);
				lowText->setEnabled(true);
				highText->setText("16", dontSendNotification);
				highText->setEnabled(true);
				labelRange->setEnabled(true);
				labelLow->setEnabled(true);
				labelHigh->setEnabled(true);
				retriggerToggle->setEnabled(false);
				retriggerToggle->setToggleState(false, dontSendNotification);
				polyToggle->setEnabled(false);
				polyToggle->setToggleState(false, dontSendNotification);
				typeBox->setSelectedId(1);
				typeBox->setEnabled(true);
				trigVolSlider->setValue(0);
				trigVolSlider->setEnabled(false);
				loopToggle->setEnabled(false);
				loopToggle->setToggleState(false, dontSendNotification);
				lockToggle->setEnabled(false);
				lockToggle->setToggleState(false, dontSendNotification);
				outputBox->setEnabled(false);
				outputBox->setSelectedId(1);
				labelOutput->setEnabled(false);
				labelTriggerVol->setEnabled(false);
			break;
			case 8:	// Volume Up
			case 9: // Volume Dn
				lowText->setText("", dontSendNotification);
				lowText->setEnabled(false);
				highText->setText("", dontSendNotification);
				highText->setEnabled(false);
				labelRange->setEnabled(false);
				labelLow->setEnabled(false);
				labelHigh->setEnabled(false);
				retriggerToggle->setEnabled(false);
				retriggerToggle->setToggleState(false, dontSendNotification);
				polyToggle->setEnabled(false);
				polyToggle->setToggleState(false, dontSendNotification);
				typeBox->setSelectedId(1);
				typeBox->setEnabled(false);
				trigVolSlider->setValue(0);
				trigVolSlider->setEnabled(false);
				loopToggle->setEnabled(false);
				loopToggle->setToggleState(false, dontSendNotification);
				lockToggle->setEnabled(false);
				lockToggle->setToggleState(false, dontSendNotification);
				outputBox->setEnabled(true);
				outputBox->setSelectedId(1);
				labelOutput->setEnabled(true);
				labelTriggerVol->setEnabled(false);
			break;
			case 10: // MIDI Bank Up
			case 11: // MIDI Bank Dn
			case 12: // Trigger Bank Up
			case 13: // Trigger Bank Dn
				lowText->setText("", dontSendNotification);
				lowText->setEnabled(false);
				highText->setText("", dontSendNotification);
				highText->setEnabled(false);
				labelRange->setEnabled(false);
				labelLow->setEnabled(false);
				labelHigh->setEnabled(false);
				retriggerToggle->setEnabled(false);
				retriggerToggle->setToggleState(false, dontSendNotification);
				polyToggle->setEnabled(false);
				polyToggle->setToggleState(false, dontSendNotification);
				typeBox->setSelectedId(1);
				typeBox->setEnabled(false);
				trigVolSlider->setValue(0);
				trigVolSlider->setEnabled(false);
				loopToggle->setEnabled(false);
				loopToggle->setToggleState(false, dontSendNotification);
				lockToggle->setEnabled(false);
				lockToggle->setToggleState(false, dontSendNotification);
				outputBox->setEnabled(false);
				outputBox->setSelectedId(1);
				labelOutput->setEnabled(false);
				labelTriggerVol->setEnabled(false);
			break;
			case 14: // Synced Pair
				lowText->setText("1", dontSendNotification);
				lowText->setEnabled(true);
				highText->setText("2", dontSendNotification);
				highText->setEnabled(true);
				labelRange->setEnabled(true);
				labelLow->setEnabled(true);
				labelHigh->setEnabled(true);
				retriggerToggle->setEnabled(true);
				retriggerToggle->setToggleState(true, dontSendNotification);
				polyToggle->setEnabled(true);
				polyToggle->setToggleState(true, dontSendNotification);
				typeBox->setSelectedId(1);
				typeBox->setEnabled(true);
				trigVolSlider->setValue(0);
				trigVolSlider->setEnabled(true);
				loopToggle->setEnabled(true);
				loopToggle->setToggleState(false, dontSendNotification);
				lockToggle->setEnabled(true);
				lockToggle->setToggleState(true, dontSendNotification);
				outputBox->setEnabled(true);
				outputBox->setSelectedId(1);
				labelOutput->setEnabled(true);
				labelTriggerVol->setEnabled(true);
			break;
			default:
			break;
		}
        //[/UserComboBoxCode_functionBox]
    }
    else if (comboBoxThatHasChanged == typeBox)
    {
        //[UserComboBoxCode_typeBox] -- add your combo box handling code here..

 		int t = typeBox->getSelectedId();
		switch (t) {
			case 1: // Edge
				retriggerToggle->setEnabled(true);
				retriggerToggle->setToggleState(true, dontSendNotification);
				loopToggle->setEnabled(true);
				loopToggle->setToggleState(false, dontSendNotification);
			break;
			case 2: // Level
				retriggerToggle->setEnabled(false);
				retriggerToggle->setToggleState(false, dontSendNotification);
				loopToggle->setEnabled(false);
				loopToggle->setToggleState(false, dontSendNotification);
			break;
			case 3: // Latched
				retriggerToggle->setEnabled(true);
				retriggerToggle->setToggleState(false, dontSendNotification);
				loopToggle->setEnabled(false);
				loopToggle->setToggleState(false, dontSendNotification);
			break;
			default:
			break;
		}

        //[/UserComboBoxCode_typeBox]
    }
    else if (comboBoxThatHasChanged == baudBox)
    {
        //[UserComboBoxCode_baudBox] -- add your combo box handling code here..

		// Look for and delete any existing BAUD entries
		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#BAUD"))
				mInitStrings.remove(n);
		}
		// Add an entry if not the default
		if (baudBox->getSelectedId() < 6) {
			releaseSlider->setEnabled(false);
			velocityToggle->setEnabled(false);
			noteOffToggle->setEnabled(false);
			releaseText->setEnabled(false);
			releaseSlider->setValue(0.0, dontSendNotification);
			pitchBox->setEnabled(false);
			pitchText->setEnabled(false);
			pitchBox->setSelectedId(2, dontSendNotification);
			velocityToggle->setToggleState(false, dontSendNotification);
			noteOffToggle->setToggleState(false, dontSendNotification);
			String bStr = "#BAUD ";
			switch (baudBox->getSelectedId()) {
				case 1:
					bStr += "1200";
				break;
				case 2:
					bStr += "2400";
				break;
				case 3:
					bStr += "9600";
				break;
				case 4:
					bStr += "19200";
				break;
				case 5:
					bStr += "38400";
				break;
			}
			bStr += newLine;
			mInitStrings.insert(0, bStr);
		}
		updateInitWindow();

        //[/UserComboBoxCode_baudBox]
    }
    else if (comboBoxThatHasChanged == triggerBox)
    {
        //[UserComboBoxCode_triggerBox] -- add your combo box handling code here..

		int n = findTrigger(triggerBox->getSelectedId());
		if ((n >= 0) && (n < 128))
		{
			parseTriggerDesc(mInitStrings[n]);
			addButton->setEnabled(false);
			updateButton->setEnabled(true);
			deleteButton->setEnabled(true);
			copyButton->setEnabled(true);
			if (m_portOpenFlag)
				testButton->setEnabled(true);
		}
		else {
			resetTrigger();
			addButton->setEnabled(true);
			updateButton->setEnabled(false);
			deleteButton->setEnabled(false);
			copyButton->setEnabled(false);
			testButton->setEnabled(false);
		}

        //[/UserComboBoxCode_triggerBox]
    }
    else if (comboBoxThatHasChanged == interfaceBox)
    {
        //[UserComboBoxCode_interfaceBox] -- add your combo box handling code here..

		int i = interfaceBox->getSelectedId();
		switch (i) {
			case 1:	// Contact Closure
				invertToggle->setToggleState(false, dontSendNotification);
			break;
			default: // Active
				invertToggle->setToggleState(true, dontSendNotification);
			break;
		}

        //[/UserComboBoxCode_interfaceBox]
    }
    else if (comboBoxThatHasChanged == portBox)
    {
        //[UserComboBoxCode_portBox] -- add your combo box handling code here..

		if (portBox->getSelectedId() != m_portBoxItem) {
			m_portBoxItem = portBox->getSelectedId();
			String pN = portBox->getText();
			if (pCom->isPortOpen())
				pCom->closePort();
			if (pCom->openPort(pN)) {
				statusBar->setText("  >COM port opened successfully", dontSendNotification);
				m_portOpenFlag = true;
				stopButton->setEnabled(true);
			}
			else {
				statusBar->setText("  >COM port could not be opened!", dontSendNotification);
				m_portOpenFlag = false;
				testButton->setEnabled(false);
				stopButton->setEnabled(false);
			}
		}

        //[/UserComboBoxCode_portBox]
    }
    else if (comboBoxThatHasChanged == testBaudBox)
    {
        //[UserComboBoxCode_testBaudBox] -- add your combo box handling code here..
        //[/UserComboBoxCode_testBaudBox]
    }
    else if (comboBoxThatHasChanged == pitchBox)
    {
        //[UserComboBoxCode_pitchBox] -- add your combo box handling code here..

		// Look for and delete any existing BEND entry
		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#BEND"))
				mInitStrings.remove(n);
		}
		String bStr;
		switch (pitchBox->getSelectedId()) {
			case 1:
				bStr += "#BEND 1";
				bStr += newLine;
				mInitStrings.insert(0, bStr);
			break;
			case 3:
				bStr += "#BEND 3";
				bStr += newLine;
				mInitStrings.insert(0, bStr);
			break;
			case 4:
				bStr += "#BEND 4";
				bStr += newLine;
				mInitStrings.insert(0, bStr);
			break;
			case 5:
				bStr += "#BEND 5";
				bStr += newLine;
				mInitStrings.insert(0, bStr);
			break;
		}
		updateInitWindow();

        //[/UserComboBoxCode_pitchBox]
    }
    else if (comboBoxThatHasChanged == outputBox)
    {
        //[UserComboBoxCode_outputBox] -- add your combo box handling code here..
        //[/UserComboBoxCode_outputBox]
    }
    else if (comboBoxThatHasChanged == channelBox)
    {
        //[UserComboBoxCode_channelBox] -- add your combo box handling code here..

		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#MCHN"))
				mInitStrings.remove(n);
		}
		int c = channelBox->getSelectedId();
		if (c > 1) {
			String cStr;
			cStr += "#MCHN ";
			cStr += (c - 1);
			cStr += newLine;
			mInitStrings.insert(0, cStr);
		}
		updateInitWindow();

        //[/UserComboBoxCode_channelBox]
    }
    else if (comboBoxThatHasChanged == modeBox)
    {
        //[UserComboBoxCode_modeBox] -- add your combo box handling code here..

		bool d = AlertWindow::showOkCancelBox(AlertWindow::InfoIcon, "Warning!",
			"Changing the mode will reset everything to default");

		if (!d) {
			if (modeBox->getSelectedId() == 1)
				modeBox->setSelectedId(2, dontSendNotification);
			else
				modeBox->setSelectedId(1, dontSendNotification);
		}
		else {
			reset();
			if (modeBox->getSelectedId() == 1) {
				labelOut5->setEnabled(false);
				vol5Slider->setEnabled(false);
				labelOut6->setEnabled(false);
				vol6Slider->setEnabled(false);
				labelOut7->setEnabled(false);
				vol7Slider->setEnabled(false);
				labelOut8->setEnabled(false);
				vol8Slider->setEnabled(false);
				labelOutput->setText("Stereo Output", dontSendNotification);
				outputBox->setItemEnabled(5, false);
				outputBox->setItemEnabled(6, false);
				outputBox->setItemEnabled(7, false);
				outputBox->setItemEnabled(8, false);
				functionBox->setItemEnabled(14, false);
				AlertWindow::showMessageBoxAsync(AlertWindow::InfoIcon, "Mode Changed to Stereo",
					"Make sure you're running the Tsunami stereo firmware version when using this init file.");
			}
			else if (modeBox->getSelectedId() == 2) {
				labelOut5->setEnabled(true);
				vol5Slider->setEnabled(true);
				labelOut6->setEnabled(true);
				vol6Slider->setEnabled(true);
				labelOut7->setEnabled(true);
				vol7Slider->setEnabled(true);
				labelOut8->setEnabled(true);
				vol8Slider->setEnabled(true);
				labelOutput->setText("Mono Output", dontSendNotification);
				outputBox->setItemEnabled(5, true);
				outputBox->setItemEnabled(6, true);
				outputBox->setItemEnabled(7, true);
				outputBox->setItemEnabled(8, true);
				functionBox->setItemEnabled(14, true);
				AlertWindow::showMessageBoxAsync(AlertWindow::InfoIcon, "Mode Changed to Mono",
					"Make sure you're running the Tsunami mono firmware version when using this init file.");
			}
		}

        //[/UserComboBoxCode_modeBox]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void MainComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == invertToggle)
    {
        //[UserButtonCode_invertToggle] -- add your button handler code here..
        //[/UserButtonCode_invertToggle]
    }
    else if (buttonThatWasClicked == polyToggle)
    {
        //[UserButtonCode_polyToggle] -- add your button handler code here..
        //[/UserButtonCode_polyToggle]
    }
    else if (buttonThatWasClicked == newButton)
    {
        //[UserButtonCode_newButton] -- add your button handler code here..
		reset();
        //[/UserButtonCode_newButton]
    }
    else if (buttonThatWasClicked == openButton)
    {
        //[UserButtonCode_openButton] -- add your button handler code here..

        FileChooser fc ("Choose a file to open...",
				File::getCurrentWorkingDirectory().getChildFile("*.ini"),
                "*.ini",
                true);
        if (fc.browseForFileToOpen ()) {
			File file = fc.getResult();
			open(file);
		}

        //[/UserButtonCode_openButton]
    }
    else if (buttonThatWasClicked == saveAsButton)
    {
        //[UserButtonCode_saveAsButton] -- add your button handler code here..

        FileChooser fc ("Choose a file to save...",
				File::getCurrentWorkingDirectory().getChildFile("tsunami.ini"),
                "*.ini",
                true);
        if (fc.browseForFileToSave (true)) {
			File file = fc.getResult();
			save(file);
		}

        //[/UserButtonCode_saveAsButton]
    }
    else if (buttonThatWasClicked == linkButton)
    {
        //[UserButtonCode_linkButton] -- add your button handler code here..
        //[/UserButtonCode_linkButton]
    }
    else if (buttonThatWasClicked == addButton)
    {
        //[UserButtonCode_addButton] -- add your button handler code here..

		//mInitStrings.add(buildTriggerDesc());
		if (insertTriggerString()) {
			updateInitWindow();
			addButton->setEnabled(false);
			updateButton->setEnabled(true);
			deleteButton->setEnabled(true);
			copyButton->setEnabled(true);
			if (m_portOpenFlag)
				testButton->setEnabled(true);
		}

        //[/UserButtonCode_addButton]
    }
    else if (buttonThatWasClicked == updateButton)
    {
        //[UserButtonCode_updateButton] -- add your button handler code here..

		int m = findTrigger(triggerBox->getSelectedId());
		if ((m >= 0) && (m < 128)) {
			deleteInitString(m);
		}
		insertTriggerString();
		updateInitWindow();
		addButton->setEnabled(false);
		updateButton->setEnabled(true);
		deleteButton->setEnabled(true);
		copyButton->setEnabled(true);
		if (m_portOpenFlag)
			testButton->setEnabled(true);

        //[/UserButtonCode_updateButton]
    }
    else if (buttonThatWasClicked == deleteButton)
    {
        //[UserButtonCode_deleteButton] -- add your button handler code here..

		int m = findTrigger(triggerBox->getSelectedId());
		if ((m >= 0) && (m < 128)) {
			deleteInitString(m);
			addButton->setEnabled(true);
			updateButton->setEnabled(false);
			deleteButton->setEnabled(false);
			copyButton->setEnabled(false);
			testButton->setEnabled(false);
			updateInitWindow();
		}

        //[/UserButtonCode_deleteButton]
    }
    else if (buttonThatWasClicked == retriggerToggle)
    {
        //[UserButtonCode_retriggerToggle] -- add your button handler code here..
        //[/UserButtonCode_retriggerToggle]
    }
    else if (buttonThatWasClicked == resetButton)
    {
        //[UserButtonCode_resetButton] -- add your button handler code here..

		resetTrigger();

        //[/UserButtonCode_resetButton]
    }
    else if (buttonThatWasClicked == testButton)
    {
        //[UserButtonCode_testButton] -- add your button handler code here..

		testTrigger();

        //[/UserButtonCode_testButton]
    }
    else if (buttonThatWasClicked == stopButton)
    {
        //[UserButtonCode_stopButton] -- add your button handler code here..

		pCom->stopAll();

        //[/UserButtonCode_stopButton]
    }
    else if (buttonThatWasClicked == copyButton)
    {
        //[UserButtonCode_copyButton] -- add your button handler code here..

		int ct = triggerBox->getSelectedId();
		if (ct < 16) {
			ct++;
			triggerBox->setSelectedId(ct, dontSendNotification);
			if (ct == 16)
				copyButton->setEnabled(false);

			int m = findTrigger(triggerBox->getSelectedId());
			if ((m >= 0) && (m < 128)) {
				deleteInitString(m);
			}
			if (insertTriggerString()) {
				updateInitWindow();
				addButton->setEnabled(false);
				updateButton->setEnabled(true);
				deleteButton->setEnabled(true);
				copyButton->setEnabled(true);
				if (m_portOpenFlag)
					testButton->setEnabled(true);
			}
		}
		else
			copyButton->setEnabled(false);

        //[/UserButtonCode_copyButton]
    }
    else if (buttonThatWasClicked == velocityToggle)
    {
        //[UserButtonCode_velocityToggle] -- add your button handler code here..

		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#MIDI"))
				mInitStrings.remove(n);
		}
		String bStr = "#MIDI ";
		int m = 0;
		if (velocityToggle->getToggleState())
			m |= 2;
		if (noteOffToggle->getToggleState())
			m |= 4;
		if (m > 0) {
			bStr += m;
			bStr += newLine;
			mInitStrings.insert(0, bStr);
		}
		updateInitWindow();

        //[/UserButtonCode_velocityToggle]
    }
    else if (buttonThatWasClicked == noteOffToggle)
    {
        //[UserButtonCode_noteOffToggle] -- add your button handler code here..

		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#MIDI"))
				mInitStrings.remove(n);
		}
		String bStr = "#MIDI ";
		int m = 0;
		if (velocityToggle->getToggleState())
			m |= 2;
		if (noteOffToggle->getToggleState())
			m |= 4;
		if (m > 0) {
			bStr += m;
			bStr += newLine;
			mInitStrings.insert(0, bStr);
		}
		updateInitWindow();

        //[/UserButtonCode_noteOffToggle]
    }
    else if (buttonThatWasClicked == loopToggle)
    {
        //[UserButtonCode_loopToggle] -- add your button handler code here..
        //[/UserButtonCode_loopToggle]
    }
    else if (buttonThatWasClicked == lockToggle)
    {
        //[UserButtonCode_lockToggle] -- add your button handler code here..
        //[/UserButtonCode_lockToggle]
    }
    else if (buttonThatWasClicked == toggleOut1)
    {
        //[UserButtonCode_toggleOut1] -- add your button handler code here..

		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#IMIX"))
				mInitStrings.remove(n);
		}
		String bStr = "#IMIX ";
		int m = 0;
		if (toggleOut1->getToggleState())
			m |= 0x01;
		if (toggleOut2->getToggleState())
			m |= 0x02;
		if (toggleOut3->getToggleState())
			m |= 0x04;
		if (toggleOut4->getToggleState())
			m |= 0x08;
		if (m > 0) {
			bStr += m;
			bStr += newLine;
			mInitStrings.insert(0, bStr);
		}
		updateInitWindow();

        //[/UserButtonCode_toggleOut1]
    }
    else if (buttonThatWasClicked == toggleOut2)
    {
        //[UserButtonCode_toggleOut2] -- add your button handler code here..

		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#IMIX"))
				mInitStrings.remove(n);
		}
		String bStr = "#IMIX ";
		int m = 0;
		if (toggleOut1->getToggleState())
			m |= 0x01;
		if (toggleOut2->getToggleState())
			m |= 0x02;
		if (toggleOut3->getToggleState())
			m |= 0x04;
		if (toggleOut4->getToggleState())
			m |= 0x08;
		if (m > 0) {
			bStr += m;
			bStr += newLine;
			mInitStrings.insert(0, bStr);
		}
		updateInitWindow();

        //[/UserButtonCode_toggleOut2]
    }
    else if (buttonThatWasClicked == toggleOut3)
    {
        //[UserButtonCode_toggleOut3] -- add your button handler code here..

		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#IMIX"))
				mInitStrings.remove(n);
		}
		String bStr = "#IMIX ";
		int m = 0;
		if (toggleOut1->getToggleState())
			m |= 0x01;
		if (toggleOut2->getToggleState())
			m |= 0x02;
		if (toggleOut3->getToggleState())
			m |= 0x04;
		if (toggleOut4->getToggleState())
			m |= 0x08;
		if (m > 0) {
			bStr += m;
			bStr += newLine;
			mInitStrings.insert(0, bStr);
		}
		updateInitWindow();

        //[/UserButtonCode_toggleOut3]
    }
    else if (buttonThatWasClicked == toggleOut4)
    {
        //[UserButtonCode_toggleOut4] -- add your button handler code here..

		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#IMIX"))
				mInitStrings.remove(n);
		}
		String bStr = "#IMIX ";
		int m = 0;
		if (toggleOut1->getToggleState())
			m |= 0x01;
		if (toggleOut2->getToggleState())
			m |= 0x02;
		if (toggleOut3->getToggleState())
			m |= 0x04;
		if (toggleOut4->getToggleState())
			m |= 0x08;
		if (m > 0) {
			bStr += m;
			bStr += newLine;
			mInitStrings.insert(0, bStr);
		}
		updateInitWindow();

        //[/UserButtonCode_toggleOut4]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void MainComponent::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == vol1Slider)
    {
        //[UserSliderCode_vol1Slider] -- add your slider handling code here..

			int i = (int)vol1Slider->getValue();

			// Look for and delete any existing VOLM entry
			for (int n = 0; n < mInitStrings.size(); n++) {
				if (mInitStrings[n].startsWith("#VOL1"))
					mInitStrings.remove(n);
			}

			// Add an entry if not the default
			if (i != 0) {
				String bStr = "#VOL1 ";
				bStr += i;
				bStr += newLine;
				mInitStrings.insert(0, bStr);
			}
			updateInitWindow();

        //[/UserSliderCode_vol1Slider]
    }
    else if (sliderThatWasMoved == trigVolSlider)
    {
        //[UserSliderCode_trigVolSlider] -- add your slider handling code here..
        //[/UserSliderCode_trigVolSlider]
    }
    else if (sliderThatWasMoved == releaseSlider)
    {
        //[UserSliderCode_releaseSlider] -- add your slider handling code here..

			int i = (int)releaseSlider->getValue();

			// Look for and delete any existing BAUD entry
			for (int n = 0; n < mInitStrings.size(); n++) {
				if (mInitStrings[n].startsWith("#MREL"))
					mInitStrings.remove(n);
			}

			// Add an entry if not the default
			if (i != 0) {
				String bStr = "#MREL ";
				bStr += i;
				bStr += newLine;
				mInitStrings.insert(0, bStr);
			}
			updateInitWindow();

        //[/UserSliderCode_releaseSlider]
    }
    else if (sliderThatWasMoved == vol2Slider)
    {
        //[UserSliderCode_vol2Slider] -- add your slider handling code here..

			int i = (int)vol2Slider->getValue();

			// Look for and delete any existing VOLM entry
			for (int n = 0; n < mInitStrings.size(); n++) {
				if (mInitStrings[n].startsWith("#VOL2"))
					mInitStrings.remove(n);
			}

			// Add an entry if not the default
			if (i != 0) {
				String bStr = "#VOL2 ";
				bStr += i;
				bStr += newLine;
				mInitStrings.insert(0, bStr);
			}
			updateInitWindow();

        //[/UserSliderCode_vol2Slider]
    }
    else if (sliderThatWasMoved == vol3Slider)
    {
        //[UserSliderCode_vol3Slider] -- add your slider handling code here..

			int i = (int)vol3Slider->getValue();

			// Look for and delete any existing VOLM entry
			for (int n = 0; n < mInitStrings.size(); n++) {
				if (mInitStrings[n].startsWith("#VOL3"))
					mInitStrings.remove(n);
			}

			// Add an entry if not the default
			if (i != 0) {
				String bStr = "#VOL3 ";
				bStr += i;
				bStr += newLine;
				mInitStrings.insert(0, bStr);
			}
			updateInitWindow();

        //[/UserSliderCode_vol3Slider]
    }
    else if (sliderThatWasMoved == vol4Slider)
    {
        //[UserSliderCode_vol4Slider] -- add your slider handling code here..

			int i = (int)vol4Slider->getValue();

			// Look for and delete any existing VOLM entry
			for (int n = 0; n < mInitStrings.size(); n++) {
				if (mInitStrings[n].startsWith("#VOL4"))
					mInitStrings.remove(n);
			}

			// Add an entry if not the default
			if (i != 0) {
				String bStr = "#VOL4 ";
				bStr += i;
				bStr += newLine;
				mInitStrings.insert(0, bStr);
			}
			updateInitWindow();

        //[/UserSliderCode_vol4Slider]
    }
    else if (sliderThatWasMoved == vol5Slider)
    {
        //[UserSliderCode_vol5Slider] -- add your slider handling code here..

		int i = (int)vol5Slider->getValue();

		// Look for and delete any existing VOLM entry
		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#VOL5"))
				mInitStrings.remove(n);
		}

		// Add an entry if not the default
		if (i != 0) {
			String bStr = "#VOL5 ";
			bStr += i;
			bStr += newLine;
			mInitStrings.insert(0, bStr);
		}
		updateInitWindow();

        //[/UserSliderCode_vol5Slider]
    }
    else if (sliderThatWasMoved == vol6Slider)
    {
        //[UserSliderCode_vol6Slider] -- add your slider handling code here..

		int i = (int)vol6Slider->getValue();

		// Look for and delete any existing VOLM entry
		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#VOL6"))
				mInitStrings.remove(n);
		}

		// Add an entry if not the default
		if (i != 0) {
			String bStr = "#VOL6 ";
			bStr += i;
			bStr += newLine;
			mInitStrings.insert(0, bStr);
		}
		updateInitWindow();

        //[/UserSliderCode_vol6Slider]
    }
    else if (sliderThatWasMoved == vol7Slider)
    {
        //[UserSliderCode_vol7Slider] -- add your slider handling code here..

		int i = (int)vol7Slider->getValue();

		// Look for and delete any existing VOLM entry
		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#VOL7"))
				mInitStrings.remove(n);
		}

		// Add an entry if not the default
		if (i != 0) {
			String bStr = "#VOL7 ";
			bStr += i;
			bStr += newLine;
			mInitStrings.insert(0, bStr);
		}
		updateInitWindow();

        //[/UserSliderCode_vol7Slider]
    }
    else if (sliderThatWasMoved == vol8Slider)
    {
        //[UserSliderCode_vol8Slider] -- add your slider handling code here..

		int i = (int)vol8Slider->getValue();

		// Look for and delete any existing VOLM entry
		for (int n = 0; n < mInitStrings.size(); n++) {
			if (mInitStrings[n].startsWith("#VOL8"))
				mInitStrings.remove(n);
		}

		// Add an entry if not the default
		if (i != 0) {
			String bStr = "#VOL8 ";
			bStr += i;
			bStr += newLine;
			mInitStrings.insert(0, bStr);
		}
		updateInitWindow();

        //[/UserSliderCode_vol8Slider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

// Put most of the custom MainComponent methods in a separate file
#include "MCFunctions.h"

void MainComponent::changeListenerCallback(ChangeBroadcaster *)
{

}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainComponent" componentName=""
                 parentClasses="public Component, public ChangeListener" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="0" snapShown="1"
                 overlayOpacity="0.330" fixedSize="1" initialWidth="1024" initialHeight="700">
  <BACKGROUND backgroundColour="ff828282"/>
  <GROUPCOMPONENT name="new group" id="6ec7de23acb7bc6f" memberName="groupComponent2"
                  virtualName="" explicitFocusOrder="0" pos="32 16 409 384" textcol="ff363636"
                  title="System"/>
  <GROUPCOMPONENT name="new group" id="90ec82064f979d06" memberName="groupComponent4"
                  virtualName="" explicitFocusOrder="0" pos="32 413 408 195" textcol="ff363636"
                  title="MIDI"/>
  <GROUPCOMPONENT name="new group" id="242a01730ad6db8e" memberName="groupComponent3"
                  virtualName="" explicitFocusOrder="0" pos="465 300 526 76" textcol="ff363636"
                  title="Trigger Test COM Port (optional)"/>
  <GROUPCOMPONENT name="new group" id="38c25bfaed540c9a" memberName="groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="465 16 526 268" outlinecol="66000000"
                  textcol="ff363636" title="Trigger Settings"/>
  <LABEL name="new label" id="ef8d15cc5a4b63c3" memberName="statusBar"
         virtualName="" explicitFocusOrder="0" pos="0 0Rr 100% 24" bkgCol="ff9c9c9c"
         textCol="ff000000" outlineCol="0" edTextCol="ff000000" edBkgCol="0"
         labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <COMBOBOX name="function box" id="8ec5e1a0b6bf5e23" memberName="functionBox"
            virtualName="" explicitFocusOrder="0" pos="846 62 112 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="type box" id="d1fcc0036164e910" memberName="typeBox" virtualName=""
            explicitFocusOrder="0" pos="731 62 98 24" editable="0" layout="33"
            items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TOGGLEBUTTON name="invert toggle" id="a46ca2e5cccc18cc" memberName="invertToggle"
                virtualName="" explicitFocusOrder="0" pos="494 115 65 24" buttonText="Invert"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="poly toggle" id="429d46bb36488187" memberName="polyToggle"
                virtualName="" explicitFocusOrder="0" pos="668 115 96 24" buttonText="Polyphonic"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TEXTEDITOR name="low text" id="34a63e8887bfc5f3" memberName="lowText" virtualName=""
              explicitFocusOrder="0" pos="847 117 44 20" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="0" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="high text" id="78ea03ee33471435" memberName="highText"
              virtualName="" explicitFocusOrder="0" pos="913 117 44 20" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="0"
              caret="1" popupmenu="1"/>
  <TEXTBUTTON name="new button" id="b85453e71d7e819a" memberName="newButton"
              virtualName="" explicitFocusOrder="0" pos="203 630 63 24" buttonText="New"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="open button" id="aff16e2440c1e77e" memberName="openButton"
              virtualName="" explicitFocusOrder="0" pos="41 630 63 24" buttonText="Open"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="save as button" id="36951dd779d924d0" memberName="saveAsButton"
              virtualName="" explicitFocusOrder="0" pos="123 630 63 24" buttonText="Save As"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="55d41def757f7937" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="840 39 63 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Function" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ab69c117bbd4949c" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="726 38 47 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Type" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="76f809313cab5795" memberName="labelRange"
         virtualName="" explicitFocusOrder="0" pos="840 94 87 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Track Range" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="baud box" id="34072d5a8cd3a40e" memberName="baudBox" virtualName=""
            explicitFocusOrder="0" pos="143 46 148 24" editable="0" layout="33"
            items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="b168245de12e2a99" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="57 46 105 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Serial Com:&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="volume slider" id="fbfedd66eca0907d" memberName="vol1Slider"
          virtualName="" explicitFocusOrder="0" pos="59 162 160 24" rotarysliderfill="7f000000"
          min="-20" max="10" int="1" style="LinearHorizontal" textBoxPos="TextBoxRight"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="8236b56510d8f8c8" memberName="label22" virtualName=""
         explicitFocusOrder="0" pos="58 140 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Output 1 Volume (dB)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <HYPERLINKBUTTON name="link button" id="f202f29b31c62ae" memberName="linkButton"
                   virtualName="" explicitFocusOrder="0" pos="386 632 68 24" tooltip="http://robertsonics.com/wav-trigger-online-user-guide/"
                   textCol="ff0000ff" buttonText="Help" connectedEdges="0" needsCallback="1"
                   radioGroupId="0" url="http://robertsonics.com/wav-trigger-online-user-guide/"/>
  <TEXTEDITOR name="init text editor" id="affceb0f94323c59" memberName="initText"
              virtualName="" explicitFocusOrder="0" pos="470 408 520 248" initialText=""
              multiline="1" retKeyStartsLine="1" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <COMBOBOX name="trigger combo box" id="254229b66c221ce9" memberName="triggerBox"
            virtualName="" explicitFocusOrder="0" pos="498 62 56 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="interface combo box" id="7acafe3ed6d58318" memberName="interfaceBox"
            virtualName="" explicitFocusOrder="0" pos="571 62 143 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TEXTBUTTON name="add button" id="82c93bdd5a7a904" memberName="addButton"
              virtualName="" explicitFocusOrder="0" pos="576 235 63 24" buttonText="Add"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="update button" id="1bccddea64d1188d" memberName="updateButton"
              virtualName="" explicitFocusOrder="0" pos="655 235 63 24" buttonText="Update"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="delete button" id="59540029ea4972fb" memberName="deleteButton"
              virtualName="" explicitFocusOrder="0" pos="734 235 63 24" buttonText="Delete"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="fa287ff2e92f4a56" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="492 38 56 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Trigger" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ce0bd5e83327f19a" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="565 38 141 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Hardware Interface" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="retrigger toggle button" id="f81a36913a0b030d" memberName="retriggerToggle"
                virtualName="" explicitFocusOrder="0" pos="564 115 95 24" buttonText="Re-Triggers"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TEXTBUTTON name="reset button" id="4dc7d5288c0df2c4" memberName="resetButton"
              virtualName="" explicitFocusOrder="0" pos="497 235 63 24" buttonText="Reset"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="fd492b223f17bf03" memberName="labelLow"
         virtualName="" explicitFocusOrder="0" pos="842 135 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Low" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="72cd6762c5446d8e" memberName="labelHigh"
         virtualName="" explicitFocusOrder="0" pos="908 136 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="High" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5a682e7a8a3d958d" memberName="label10" virtualName=""
         explicitFocusOrder="0" pos="465 385 125 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="Init File Contents:"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="delete button" id="4442e4119290b378" memberName="testButton"
              virtualName="" explicitFocusOrder="0" pos="894 235 63 24" bgColOff="ffd00009"
              buttonText="Test" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <COMBOBOX name="new combo box" id="c435d1c5f7439ac0" memberName="portBox"
            virtualName="" explicitFocusOrder="0" pos="545 332 208 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="7379b2c212d86ee1" memberName="label11" virtualName=""
         explicitFocusOrder="0" pos="497 332 48 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Port:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <COMBOBOX name="new combo box" id="b2a56f4745f2174c" memberName="testBaudBox"
            virtualName="" explicitFocusOrder="0" pos="854 332 104 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="e8953b892beb4114" memberName="label12" virtualName=""
         explicitFocusOrder="0" pos="781 333 72 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Baudrate:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="trig volume slider" id="68756f4fad130222" memberName="trigVolSlider"
          virtualName="" explicitFocusOrder="0" pos="629 183 140 24" min="-20"
          max="10" int="1" style="LinearHorizontal" textBoxPos="TextBoxRight"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="ba8e00fa1d703ed8" memberName="labelTriggerVol"
         virtualName="" explicitFocusOrder="0" pos="495 182 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Trigger Volume (dB)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="stop button" id="4b667057695aa760" memberName="stopButton"
              virtualName="" explicitFocusOrder="0" pos="283 630 63 24" buttonText="StopAll"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="copy button" id="923548f55486380c" memberName="copyButton"
              virtualName="" explicitFocusOrder="0" pos="813 235 63 24" buttonText="Copy"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TOGGLEBUTTON name="velocity toggle button" id="f4db3cfaede9e9fd" memberName="velocityToggle"
                virtualName="" explicitFocusOrder="0" pos="59 538 125 24" buttonText="Ignore Velocity"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <SLIDER name="release slider" id="15aa3da61a7b51ad" memberName="releaseSlider"
          virtualName="" explicitFocusOrder="0" pos="60 504 160 24" min="0"
          max="127" int="1" style="LinearHorizontal" textBoxPos="TextBoxRight"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="cdfea73ff3c1eb4b" memberName="releaseText"
         virtualName="" explicitFocusOrder="0" pos="58 482 155 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Default Release (msec)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="pitch box" id="7d52d2e9e85b09c8" memberName="pitchBox"
            virtualName="" explicitFocusOrder="0" pos="331 442 58 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="e118a36298cb29b5" memberName="pitchText"
         virtualName="" explicitFocusOrder="0" pos="249 434 80 40" edTextCol="ff000000"
         edBkgCol="0" labelText="Pitch Bend&#10;Semitones" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="noteOff toggle button" id="9133c3e894575bc8" memberName="noteOffToggle"
                virtualName="" explicitFocusOrder="0" pos="59 564 150 24" buttonText="Ignore Note-Offs"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="352d2b82ce0335a5" memberName="loopToggle"
                virtualName="" explicitFocusOrder="0" pos="767 116 62 24" buttonText="Loop"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <COMBOBOX name="trigger combo box" id="bba2569c7d0295f6" memberName="outputBox"
            virtualName="" explicitFocusOrder="0" pos="901 183 56 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="95cc2e0ac3f8c1d9" memberName="labelOutput"
         virtualName="" explicitFocusOrder="0" pos="805 183 94 24" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="volume slider" id="bca631e2a31f4014" memberName="vol2Slider"
          virtualName="" explicitFocusOrder="0" pos="59 206 160 24" rotarysliderfill="7f000000"
          min="-20" max="10" int="1" style="LinearHorizontal" textBoxPos="TextBoxRight"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="399805de6a907cdf" memberName="label14" virtualName=""
         explicitFocusOrder="0" pos="59 185 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Output 2 Volume (dB)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="volume slider" id="e1469fe56ba1a2cc" memberName="vol3Slider"
          virtualName="" explicitFocusOrder="0" pos="59 251 160 24" rotarysliderfill="7f000000"
          min="-20" max="10" int="1" style="LinearHorizontal" textBoxPos="TextBoxRight"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="bcdb4914c431d600" memberName="label15" virtualName=""
         explicitFocusOrder="0" pos="58 229 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Output 3 Volume (dB)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="volume slider" id="38e1636fb12d89de" memberName="vol4Slider"
          virtualName="" explicitFocusOrder="0" pos="59 296 160 24" rotarysliderfill="7f000000"
          min="-20" max="10" int="1" style="LinearHorizontal" textBoxPos="TextBoxRight"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="7033d3ea553f6072" memberName="label16" virtualName=""
         explicitFocusOrder="0" pos="59 275 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Output 4 Volume (dB)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="lock toggle" id="f17a19d748d9d413" memberName="lockToggle"
                virtualName="" explicitFocusOrder="0" pos="494 147 107 24" buttonText="Lock Voice"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <COMBOBOX name="channel box" id="3565d506814d6dc8" memberName="channelBox"
            virtualName="" explicitFocusOrder="0" pos="125 441 96 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="channel Text" id="29207d31a8717a20" memberName="channelText"
         virtualName="" explicitFocusOrder="0" pos="58 441 67 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Channel:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="new toggle button" id="35ab85c1dd077f6f" memberName="toggleOut1"
                virtualName="" explicitFocusOrder="0" pos="76 357 49 24" buttonText="1/2"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="67cf6674d73ac72a" memberName="toggleOut2"
                virtualName="" explicitFocusOrder="0" pos="136 357 49 24" buttonText="3/4"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="b22597bedf0dfa16" memberName="toggleOut3"
                virtualName="" explicitFocusOrder="0" pos="194 357 48 24" buttonText="5/6"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="afb9e18f139963a2" memberName="toggleOut4"
                virtualName="" explicitFocusOrder="0" pos="251 357 58 24" buttonText="7/8"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <LABEL name="new label" id="11642574a48cd0a1" memberName="label17" virtualName=""
         explicitFocusOrder="0" pos="60 334 166 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Audio IN mixed to OUT:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="volume slider" id="34cefc0fe20d8433" memberName="vol5Slider"
          virtualName="" explicitFocusOrder="0" pos="244 163 160 24" rotarysliderfill="7f000000"
          min="-20" max="10" int="1" style="LinearHorizontal" textBoxPos="TextBoxRight"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="4d3dcbae05a1fc66" memberName="labelOut5"
         virtualName="" explicitFocusOrder="0" pos="243 141 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Output 5 Volume (dB)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="volume slider" id="594c492406606c22" memberName="vol6Slider"
          virtualName="" explicitFocusOrder="0" pos="244 207 160 24" rotarysliderfill="7f000000"
          min="-20" max="10" int="1" style="LinearHorizontal" textBoxPos="TextBoxRight"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="d1b9eb4680618cf0" memberName="labelOut6"
         virtualName="" explicitFocusOrder="0" pos="244 186 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Output 6 Volume (dB)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="volume slider" id="191b714d38bbd1ba" memberName="vol7Slider"
          virtualName="" explicitFocusOrder="0" pos="244 252 160 24" rotarysliderfill="7f000000"
          min="-20" max="10" int="1" style="LinearHorizontal" textBoxPos="TextBoxRight"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="78bbaf11cbe5e11f" memberName="labelOut7"
         virtualName="" explicitFocusOrder="0" pos="243 230 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Output 7 Volume (dB)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="volume slider" id="7dd5aaf3f2fe447a" memberName="vol8Slider"
          virtualName="" explicitFocusOrder="0" pos="244 297 160 24" rotarysliderfill="7f000000"
          min="-20" max="10" int="1" style="LinearHorizontal" textBoxPos="TextBoxRight"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="9d81fdbc34844a34" memberName="labelOut8"
         virtualName="" explicitFocusOrder="0" pos="244 276 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Output 8 Volume (dB)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="new combo box" id="55ca5f35aad8ab12" memberName="modeBox"
            virtualName="" explicitFocusOrder="0" pos="143 96 148 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="edb86e2f56eaacc" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="91 95 54 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Mode:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
