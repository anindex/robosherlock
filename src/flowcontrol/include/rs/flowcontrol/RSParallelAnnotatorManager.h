/**
 * Copyright 2014 University of Bremen, Institute for Artificial Intelligence
 * Author(s): Patrick Mania <pmania@cs.uni-bremen.de>
 *         Ferenc Balint-Benczedi <balintbe@cs.uni-bremen.de>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

 #ifndef __RSPARALLEL_ANNOTATOR_MANAGER_H__
 #define __RSPARALLEL_ANNOTATOR_MANAGER_H__

class RSParallelAnnotatorManager : public uima::AnnotatorManager
{
public:
  RSParallelAnnotatorManager(RSParallelAnalysisEngine& engine);
  ~RSParallelAnnotatorManager();

private:

protected:
};

#endif