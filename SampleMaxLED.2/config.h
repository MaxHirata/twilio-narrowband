/*
 *
 * Twilio Breakout Massive SDK
 *
 * Copyright (c) 2019 Twilio, Inc.
 *
 * SPDX-License-Identifier:  Apache-2.0
 */

/**
 * \file config.h - defines configuration parameters. Can be modified by the user to adapt to a particular use-case
 *
 */
#ifndef BREAKOUT_CONFIG_H_
#define BREAKOUT_CONFIG_H_

// To enable an autentication mechanism, un-comment the #define below.  The following are supported mechanisms:
//
// USE_USERNAME_PASSWORD - Enables cleartext username/password authentication.
// USE_TLS_CERTIFICATES - Enables TLS and uses client certificates for authentication; TLS with username/password not supported at this time.
// USE_TLS_USERNAME_PASSWORD - Coming soon

//#define USE_TLS_CERTIFICATES
#define USE_USERNAME_PASSWORD

#define MQTT_BROKER_HOST "broker.hivemq.com"
// MQTT_BROKER_PORT generally is 1883 for clear-text, 8883 for TLS
#define MQTT_BROKER_PORT 1883
#define MQTT_KEEP_ALIVE 0
#define MQTT_CLIENT_ID "SOMERANDOMSTRING-alfa-kit"
#define MQTT_PUBLISH_TOPIC "SOMERANDOMSTRING/data"
#define MQTT_STATE_TOPIC "SOMERANDOMSTRING/state"

#ifdef USE_USERNAME_PASSWORD
#define MQTT_LOGIN "SOMERANDOMSTRING-1"
#define MQTT_PASSWORD "SOMERANDOMSTRING-2"
#endif

// Arduino loop interval
#define LOOP_INTERVAL 200

// MQTT Settings
//#define MQTT_LOG_ENABLED 1
#define MAX_MQTT_PACKET_SIZE 500
#define MAX_MQTT_SUBSCRIPTIONS 2

#ifdef USE_TLS_CERTIFICATES
#define USE_TLS

// TLS_PROFILE_ID 0 is usually a good default unless using multiple profiles - possible values 0-4
#define TLS_PROFILE_ID 0
#define TLS_CIPHER_SUITE USECPREF_CIPHER_SUITE_TLS_RSA_WITH_AES_256_CBC_SHA256

#include "tls_credentials.h"
#endif

#endif  // BREAKOUT_CONFIG_H_
