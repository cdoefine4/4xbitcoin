/*
 * Copyright (c) 2018-2019, The Mybtcfx Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of 4xBIT.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once 
#include <chrono>
#include <System/ContextGroup.h>
#include <System/Timer.h>

namespace System {

class ContextGroupTimeout {
public: 
  ContextGroupTimeout(Dispatcher&, ContextGroup&, std::chrono::nanoseconds);

private: 
  Timer timeoutTimer;
  ContextGroup workingContextGroup;
};

}
