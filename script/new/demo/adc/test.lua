--[[
ģ�����ƣ�ADC����
ģ�鹦�ܣ�����ADC����
ģ������޸�ʱ�䣺2017.07.22
]]

module(...,package.seeall)

--[[
��������print
����  ����ӡ�ӿڣ����ļ��е����д�ӡ�������testǰ׺
����  ����
����ֵ����
]]
local function print(...)
	_G.print("test",...)
end

--adc id
local ADC_ID = 1
--��adc
adc.open(ADC_ID)
--��ȡadc
--adcvalΪnumber���ͣ���ʾadc��ԭʼֵ����ЧֵΪ0xFFFF
--voltvalΪnumber���ͣ���ʾת����ĵ�ѹֵ����λΪ��������ЧֵΪ0xFFFF
local adcval,voltval = adc.read(ADC_ID)
print("adc.read",voltval,adcval,voltval)
--���adcval��Ч
if adcval and adcval~=0xFFFF then
end
--���voltval��Ч	
if voltval and voltval~=0xFFFF then
	--adc.read�ӿڷ��ص�voltval�Ŵ���3�������Դ˴�����3
	voltval = voltval/3
end

