/*
   Copyright 2016-2016 Bo Zimmerman

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

	   http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

class WiFiClientNode
{
  private:
    void finishConnectionLink();

  public:
    int id=0;
    char *host;
    int port;
    bool wasConnected=false;
    bool serverClient=false;
    uint8 lastPacketBuf[256];
    uint8 lastPacketLen=0;
    WiFiClient *client;
    WiFiClientNode *next = null;

    WiFiClientNode(char *hostIp, int newport);
    WiFiClientNode(WiFiClient *newClient);
    ~WiFiClientNode();
    bool isConnected();
};
