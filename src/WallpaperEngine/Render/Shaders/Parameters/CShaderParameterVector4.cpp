#include "CShaderParameterVector4.h"

using namespace WallpaperEngine::Render::Shaders::Parameters;

CShaderParameterVector4::CShaderParameterVector4 (const irr::core::vector3df& defaultValue) :
    m_defaultValue (defaultValue),
    m_value (irr::core::vector3df ()),
    CShaderParameter (&this->m_defaultValue, nullptr, Type)
{

}

void CShaderParameterVector4::setValue (irr::core::vector3df value)
{
    this->m_value = value;
    CShaderParameter::setValue (&this->m_value);
}

int CShaderParameterVector4::getSize ()
{
    return 4;
}

const std::string CShaderParameterVector4::Type = "vec4";