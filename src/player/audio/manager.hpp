#ifndef AUDIO_MANAGER_HPP_
#define AUDIO_MANAGER_HPP_
extern "C" {
#include <al.h>
#include <alc.h>
}

#include "holder.hpp"
#include <memory>
#include <string>
#include <vector>

namespace Player::Audio {
class Manager {
  std::vector<Holder> audioHolder_;
  std::shared_ptr<ALCdevice> device_;
  std::shared_ptr<ALCcontext> context_;
  ALuint buffer_;
  ALuint source_;

public:
  explicit Manager();
  ~Manager() = default;

  void Start(int _index);
  void Stop(int _index);
  void Load(std::vector<std::string> _src);
  void Load(Holder _holder);
};
} // namespace Player::Audio

#endif
