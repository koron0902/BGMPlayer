#ifndef AUDIO_HOLDER_HPP_
#define AUDIO_HOLDER_HPP_

#include <string>
#include <vector>

namespace Player::Audio {
class Holder {
  std::vector<int> buffer_;

public:
  explicit Holder();
  Holder(const Holder &) = default;
  Holder(std::string _src);
  ~Holder() = default;

  void Load(std::string _src);
  void Reload(std::string _src);
};
} // namespace Player::Audio

#endif
