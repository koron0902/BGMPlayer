#include "AudioDevice.h"
#include "Decoders.h"
#include "Encoders.h"
#include "dummy.h"

using namespace nqr;
void dummy(){
	AudioDevice::ListAudioDevices();
	const int desiredSampleRate = 44100;
	const int desiredChannelCount = 2;
	AudioDevice myDevice(desiredChannelCount, desiredSampleRate);
	myDevice.Open(myDevice.info.id);
}
