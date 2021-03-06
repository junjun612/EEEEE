//
//  RenderManager.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef RenderManager_h
#define RenderManager_h

#include "Engine/Manager/BaseManager.h"
#include "Engine/Render/BaseRenderer.h"
#include "Engine/Config/RenderConfig.h"

class RenderManager : public BaseManager
{
public:
    RenderManager();
    ~RenderManager();
    
    virtual void SetConfig(const RenderConfig& config);
    virtual bool Initialize() override;
    
    BaseRenderer* GetRenderer() const;
    
private:
    RenderConfig m_RenderConfig;
    BaseRenderer* m_pRenderer;
};

#endif /* RenderManager_hpp */
