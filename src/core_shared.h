#ifndef CORE_SHARED_H
#define CORE_SHARED_H

// Enum for oscillator type
enum OSCState {
  SIN,
  TRIANGLE,
  SAW,
  SQUARE
};

// Shared variable declaration
extern volatile OSCState wave;

// Shared ADSR settings 
struct SharedADSR {
  volatile float attack = 150;
  volatile float decay = 100;
  volatile float sustain = 100;
  volatile float release = 100;

  volatile float attackTime = .3;
  volatile float decayTime = .3;
  volatile float sustainTime = 1;
  volatile float releaseTime = .3;
};

extern volatile SharedADSR adsrSettings;

const int NUM_VOICES = 5;

extern const int WAVEFORM_SAMPLES;

#endif