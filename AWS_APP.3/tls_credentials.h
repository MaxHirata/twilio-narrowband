/*
 *
 * Twilio Breakout Massive SDK
 *
 * Copyright (c) 2019 Twilio, Inc.
 *
 * SPDX-License-Identifier:  Apache-2.0
 */

/**
 * \file tls_credentials.h - TLS credentials to use in your application.
 *
 */

#ifndef TLS_CREDENTIALS_H_
#define TLS_CREDENTIALS_H_

// You can provide either ASCII PEM encoded certificates and a private key below, or hex escaped
// DER encoded items.  The benefit of providing ASCII PEM is ease to copy/paste in and readability.
// The benefit of providing hex escaped DER items is less flash storage required and no runtime
// base64 decoding when comparing the MD5 sums before writing to the module.  In either case, choose
// the section below best for your needs and remove the comment designators.


// To provide PEM encoded items, use the openssl command line or another tool to convert, if needed,
// the trusted CA root, device cert and private key and paste below - observing the required header/footer
// and ""\ format.

#define TLS_DEVICE_CERT "" \
"-----BEGIN CERTIFICATE-----\n" \
"MIIDWTCCAkGgAwIBAgIUHQEeqezBywtAckOZGvYdjinwR3gwDQYJKoZIhvcNAQEL\n" \ 
"BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n" \
"SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTE5MDkwOTA2MjYy\n" \
"M1oXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n" \
"ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALd3zJnQdP/6l5KdrC2j\n" \
"PCprMXBPm355Q49yH2iZB2tHp8P/EEI1B+L7DDeZ5WgcYE/AayJesXkyAV46kdp9\n" \
"I3PWn7qWbA9AEp9fc90aQ3CQDgtUgvUP3BxOFlwxyXPKIfE2uD81CJ/zYew1mltT\n" \
"TwFzFPXon9PGUaKzmhM8HL9rot/ICV6vlP2/5qzHQq9ZKgiGgnkD6/QI2V//aMco\n" \
"MMFRsrKMozvt5YvKaCx5ghmwfFKqVl63yjo5stawErQ6jB6E1v5BTGcwRXwEdYp3\n" \
"Oo/b446rWY9bYu5ngwMgFEP2Hdku8x7tLnsTXHyiCPHCJE0SSkWT5Ex9dM5Xj+08\n" \
"I7kCAwEAAaNgMF4wHwYDVR0jBBgwFoAUQ5n5KMFajfufhOne5qxZhpqCJEgwHQYD\n" \
"VR0OBBYEFOSc0AMsAFQhOltoufwJFAjpfiKPMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n" \
"AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQAdh5yjTjkIr8m6OeCLgtiOZg2N\n" \
"vkXPTKAvKg+tD5e4dGquTsBvcWWfog7GT1EIGNb0tbSam7+wx/J6J3c9RbffBHwW\n" \
"VKqqHyz/ThNMA6dpHVmAiun2Pr6AtryF6joc8JIp228Ueb4Qb27e9P6wQXijfK/v\n" \
"x479kuIxzZZtYZ8GEszxQJYKKsE+Z8NOE1fJ3AFE5d8bJv4/8wHYWgcnQF39QEHF\n" \
"U94whallKIa7nuGJdrRJXmFAhS4Mu/i8LF/YztxflLTHMyk3oC7e+qOnuHInx3hf\n" \
"anWp5PNh7aGJ+nSQD9k8OpaWNxYTJkOFt76WXeCami+q1PoLBmrkpNoo0Vmk\n" \
"-----END CERTIFICATE-----";

#define TLS_DEVICE_PKEY "" \
"-----BEGIN RSA PRIVATE KEY-----\n" \
"MIIEowIBAAKCAQEAt3fMmdB0//qXkp2sLaM8KmsxcE+bfnlDj3IfaJkHa0enw/8Q\n" \
"QjUH4vsMN5nlaBxgT8BrIl6xeTIBXjqR2n0jc9afupZsD0ASn19z3RpDcJAOC1SC\n" \
"9Q/cHE4WXDHJc8oh8Ta4PzUIn/Nh7DWaW1NPAXMU9eif08ZRorOaEzwcv2ui38gJ\n" \
"Xq+U/b/mrMdCr1kqCIaCeQPr9AjZX/9oxygwwVGysoyjO+3li8poLHmCGbB8UqpW\n" \
"XrfKOjmy1rAStDqMHoTW/kFMZzBFfAR1inc6j9vjjqtZj1ti7meDAyAUQ/Yd2S7z\n" \
"Hu0uexNcfKII8cIkTRJKRZPkTH10zleP7TwjuQIDAQABAoIBAHpbz3yV5jICMqx5\n" \
"s6cMQsgXjXVV4mJLBZ/ZgNEFnkkSFPVGWtWNAKGExPUgEjuJEUKfFdRqSvqFOxxY\n" \
"+4U4CDjtXsHWKGNTXBgmVOOU7H1Z1cQArQY7eZT3DzqVicFLga+Zyu98sy/Z5ejf\n" \
"Jv7ZZMuWsNgAOPfIQBG+rnc9k/6k7PmOjDMGSILyXheo/My0xFLOB6K1Kh5AoWQt\n" \ 
"Ik5ooMM1/Lqmm1NOGEKvfUa+X0ZM4/RKNpZFgmZyOee/Fq6xc18u3dkbEfI7av0v\n" \
"FUVqJeLylNjotHwLO7r0JtAjF9ADajMFIZtFgcNbXrjJyftd3IwY2QWFiAobVNBi\n" \
"4ikhOsECgYEA5fm8AYPhkk1grRIiI5lJ5vwwzitxltrTmwHPU+a4lp8aa4El/quv\n" \
"hloSQNeej1WqWZHUYKKcuFLuRkTHNC0ABx1mvpznzuyqRgr8tlOxf0CynZ/SuLdJ\n" \
"+NGc02J1fcPG/0jOOKk2TG2kTvFlanfup1AmknLNMZiS7+lzqinjAA0CgYEAzDrE\n" \
"JIWI8mYucP/6NcE3h2oIqHeq215yFrkBEe1r4cEvAh91dhgYcbKrbq5CZTtjw9yz\n" \
"4OF/ILva5Xir8RKsKF2TWOzV8kK1nsXyA70Q9rd7+ddWr/NpD4y1fyEorcUpRda8\n" \
"ljDLNm+RYvBTlfz0Z8YjMIL2+XVF0z1bXc8i210CgYEA1YvDBwkmEYsmRS88Yh/5\n" \
"3rG4xAjVLgY+TYYttbPdHYfZqY+/7y4PC8thfbJ6OpCKYSentJ/qtMHVHYzKCOns\n" \
"R68Gc+MQ4TUjm2yiYs9uV0KFWRZKPll8J77ESAj6HnEHvI8nZrfBgtCgrOk8idOZ\n" \
"2OT1HDHb1bzeXEZDr/O7JJUCgYArYzS2WZQtgx3MreUXNHQ6lYE/YSTwM9FjGGys\n" \
"xVbNAECfX9WRgC75QK8A9Y5veT2Jp8KjPOTILICljYxhy8i9Tpv2IWKWdCunjoAK\n" \
"4UjQUUzKWEA3YyvnvMn2NzIwMJnDF4q7EaSqbOtjLJFlZPb7cPGa5cfYWVy7MubN\n" \
"OCs8lQKBgC2mQa5bfnlExEeYdUCPz3+BbUMS70pGjmjAypqVZz4y3amCKWlyhDsa\n" \
"jvcq1dZ74YNYQ918NeDJ4Qc2bDbUkqZOOOKeZb0SSTugLaexX26cEaDfFPpi+jnU\n" \
"KDgZEo0Jy42xTdr4WcyaIEja+9xX2YUoMqfxg0BwHVvMl9RrqnZ0\n" \
"-----END RSA PRIVATE KEY-----";

#define TLS_SERVER_CA "" \
"-----BEGIN CERTIFICATE-----\n" \ 
"MIIE0zCCA7ugAwIBAgIQGNrRniZ96LtKIVjNzGs7SjANBgkqhkiG9w0BAQUFADCB\n" \
"yjELMAkGA1UEBhMCVVMxFzAVBgNVBAoTDlZlcmlTaWduLCBJbmMuMR8wHQYDVQQL\n" \
"ExZWZXJpU2lnbiBUcnVzdCBOZXR3b3JrMTowOAYDVQQLEzEoYykgMjAwNiBWZXJp\n" \
"U2lnbiwgSW5jLiAtIEZvciBhdXRob3JpemVkIHVzZSBvbmx5MUUwQwYDVQQDEzxW\n" \
"ZXJpU2lnbiBDbGFzcyAzIFB1YmxpYyBQcmltYXJ5IENlcnRpZmljYXRpb24gQXV0\n" \
"aG9yaXR5IC0gRzUwHhcNMDYxMTA4MDAwMDAwWhcNMzYwNzE2MjM1OTU5WjCByjEL\n" \
"MAkGA1UEBhMCVVMxFzAVBgNVBAoTDlZlcmlTaWduLCBJbmMuMR8wHQYDVQQLExZW\n" \
"ZXJpU2lnbiBUcnVzdCBOZXR3b3JrMTowOAYDVQQLEzEoYykgMjAwNiBWZXJpU2ln\n" \
"biwgSW5jLiAtIEZvciBhdXRob3JpemVkIHVzZSBvbmx5MUUwQwYDVQQDEzxWZXJp\n" \
"U2lnbiBDbGFzcyAzIFB1YmxpYyBQcmltYXJ5IENlcnRpZmljYXRpb24gQXV0aG9y\n" \
"aXR5IC0gRzUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCvJAgIKXo1\n" \
"nmAMqudLO07cfLw8RRy7K+D+KQL5VwijZIUVJ/XxrcgxiV0i6CqqpkKzj/i5Vbex\n" \
"t0uz/o9+B1fs70PbZmIVYc9gDaTY3vjgw2IIPVQT60nKWVSFJuUrjxuf6/WhkcIz\n" \
"SdhDY2pSS9KP6HBRTdGJaXvHcPaz3BJ023tdS1bTlr8Vd6Gw9KIl8q8ckmcY5fQG\n" \
"BO+QueQA5N06tRn/Arr0PO7gi+s3i+z016zy9vA9r911kTMZHRxAy3QkGSGT2RT+\n" \
"rCpSx4/VBEnkjWNHiDxpg8v+R70rfk/Fla4OndTRQ8Bnc+MUCH7lP59zuDMKz10/\n" \
"NIeWiu5T6CUVAgMBAAGjgbIwga8wDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8E\n" \
"BAMCAQYwbQYIKwYBBQUHAQwEYTBfoV2gWzBZMFcwVRYJaW1hZ2UvZ2lmMCEwHzAH\n" \
"BgUrDgMCGgQUj+XTGoasjY5rw8+AatRIGCx7GS4wJRYjaHR0cDovL2xvZ28udmVy\n" \
"aXNpZ24uY29tL3ZzbG9nby5naWYwHQYDVR0OBBYEFH/TZafC3ey78DAJ80M5+gKv\n" \
"MzEzMA0GCSqGSIb3DQEBBQUAA4IBAQCTJEowX2LP2BqYLz3q3JktvXf2pXkiOOzE\n" \
"p6B4Eq1iDkVwZMXnl2YtmAl+X6/WzChl8gGqCBpH3vn5fJJaCGkgDdk+bW48DW7Y\n" \
"5gaRQBi5+MHt39tBquCWIMnNZBU4gcmU7qKEKQsTb47bDN0lAtukixlE0kF6BWlK\n" \
"WE9gyn6CagsCqiUXObXbf+eEZSqVir2G3l6BFoMtEMze/aiCKm0oHw0LxOXnGiYZ\n" \
"4fQRbxC1lfznQgUy286dUV4otp6F01vvpX1FQHKOtw5rDgb7MzVIcbidJ4vEZV8N\n" \
"hnacRHr2lVz2XTIIM6RUthg/aFzyQkqFOFSDX9HoLPKsEdao7WNq\n" \
"-----END CERTIFICATE-----" ;
#endif


// To provide DER encoded items, a help script is provided.  To generate this file from *.pem or *.der
// files, use the script in the 'scripts' directory of the library or
// https://github.com/twilio/Breakout_Massive_SDK_Arduino/scripts/ :
//
//   ./make_tls_credentials.sh cert.pem pkey.pem ca.pem
//
// And copy/paste the results below, see the commented out lines with \x00\x01\x02...

//#define TLS_SERVER_CA "\x00\x01\x02..."

//#define TLS_DEVICE_CERT "\x00\x01\x02..."

//#define TLS_DEVICE_PKEY "\x00\x01\x02.."

#endif  // TLS_CREDENTIALS_H_
