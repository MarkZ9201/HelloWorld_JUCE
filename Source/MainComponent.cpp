#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    addAndMakeVisible(ToggleButton1);
    addAndMakeVisible(ToggleButton2);
    setSize (600, 400);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setFont (juce::Font (40.0f));
    g.setColour (juce::Colours::white);
    g.drawText ("Add a toggle button!", getLocalBounds(), juce::Justification::centred, true);
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
    ToggleButton1.setBounds(10, 10, 30, 30);
    ToggleButton2.setBounds(100, 10, 30, 30);
}
