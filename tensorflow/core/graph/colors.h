/* Copyright 2015 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_GRAPH_COLORS_H_
#define TENSORFLOW_GRAPH_COLORS_H_

namespace tensorflow {

// Return a color drawn from a palette to represent an entity
// identified by "i".  The return value has the form "#RRGGBB" Note
// that the palette has a limited set of colors and therefore colors
// will be reused eventually.
const char* ColorFor(int dindex);

}  // namespace tensorflow

#endif  // TENSORFLOW_GRAPH_COLORS_H_
