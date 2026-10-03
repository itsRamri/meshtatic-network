#pragma once

#define CUSTOM_RSK

// ============================================================================
// I2C OLED Display Configuration
// ============================================================================
#define I2C_SDA 21
#define I2C_SCL 22

// Display driver is auto-detected via I2C bus scan (SSD1306 128x64, SH1106, etc.)
#define USE_OLED
#define USE_SSD1306

// ============================================================================
// SX1262 LoRa Radio Configuration (SPI & Control Pins)
// ============================================================================
#undef LORA_SCK
#define LORA_SCK 18
#undef LORA_MISO
#define LORA_MISO 19
#undef LORA_MOSI
#define LORA_MOSI 23
#undef LORA_CS
#define LORA_CS 5

#define SX126X_CS 5
#define SX126X_SCK 18
#define SX126X_MOSI 23
#define SX126X_MISO 19
#define SX126X_RESET 14
#define SX126X_DIO1 34   // Input-only pin on ESP32 (IRQ)
#define SX126X_BUSY 35   // Input-only pin on ESP32 (BUSY)

#define USE_SX1262
#define SX126X_MAX_POWER 22

// TCXO / XTAL Configuration:
// TCXO_OPTIONAL allows Meshtastic to probe with 1.8V TCXO on DIO3, and automatically
// fall back to standard XTAL (crystal oscillator, 0.0V) if no TCXO is present.
#define SX126X_DIO3_TCXO_VOLTAGE 1.8
#define TCXO_OPTIONAL

// RF Switch Note:
// If your specific SX1262 module connects DIO2 to an internal RF switch, uncomment:
// #define SX126X_DIO2_AS_RF_SWITCH

// ============================================================================
// 4x4 Matrix Keypad Configuration (InputBroker)
// ============================================================================
#define INPUTBROKER_MATRIX_TYPE 2

// Keypad Rows (ESP32 Outputs for row-scanning)
#define KEYS_ROWS \
    { 32, 33, 25, 26 }

// Keypad Columns (ESP32 Inputs with internal pull-up)
#define KEYS_COLS \
    { 27, 13, 16, 17 }

#define CANNED_MESSAGE_MODULE_ENABLE 1

// Status LED (Optional, standard ESP32 DevKit built-in LED)
#define LED_PIN 2
