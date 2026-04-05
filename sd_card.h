#pragma once
#include "esphome/core/component.h"
#include "esphome/components/spi/spi.h"

namespace esphome {
namespace sd_card {

class SDCardComponent : public Component, public spi::SPIDevice {
 public:
  void setup() override;
  void loop() override;
};

}  // namespace sd_card
}  // namespace esphome
