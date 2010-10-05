<Style name="tiger">
  <Rule>
    <Filter>[is_tiger] = 'yes'</Filter>
    &maxscale_zoom8;
    <LineSymbolizer stroke="red" stroke-width="0.1"/>
  </Rule>
  <Rule>
    <Filter>[is_tiger] = 'no'</Filter>
    &maxscale_zoom8;
    <LineSymbolizer stroke="green" stroke-width="0.1"/>
  </Rule>
  <Rule>
    <Filter>[is_tiger] = 'yes'</Filter>
    &maxscale_zoom9;
    <LineSymbolizer stroke="red" stroke-width="0.3"/>
  </Rule>
  <Rule>
    <Filter>[is_tiger] = 'no'</Filter>
    &maxscale_zoom9;
    <LineSymbolizer stroke="green" stroke-width="0.3"/>
  </Rule>
  <Rule>
    <Filter>[is_tiger] = 'yes'</Filter>
    &maxscale_zoom11;
    <LineSymbolizer stroke="red" stroke-width="0.6"/>
  </Rule>
  <Rule>
    <Filter>[is_tiger] = 'no'</Filter>
    &maxscale_zoom11;
    <LineSymbolizer stroke="green" stroke-width="0.6"/>
  </Rule>
  <Rule>
    <Filter>[is_tiger] = 'yes'</Filter>
    &maxscale_zoom12;
    <LineSymbolizer stroke="red" stroke-width="1"/>
  </Rule>
  <Rule>
    <Filter>[is_tiger] = 'no'</Filter>
    &maxscale_zoom12;
    <LineSymbolizer stroke="green" stroke-width="1"/>
  </Rule>
</Style>


<Layer name="roads" srs="&srs900913;">
  <StyleName>tiger</StyleName>
  <Datasource>
    <Parameter name="table">
      (select way,
        (case when osm_uid = '7168' -- DaveHansenTiger
                    and osm_timestamp::timestamp &gt;= '2007-09-01'::timestamp
                    and osm_timestamp::timestamp &lt;= '2008-05-04'::timestamp
                  then 'yes'
              when osm_uid = '15169' -- Milenko
                    and osm_timestamp::timestamp &gt;= '2007-10-29'::timestamp
                    and osm_timestamp::timestamp &lt;= '2007-12-12'::timestamp
                  then 'yes'
              else 'no' end) as is_tiger
        from &prefix;_line
        where highway is not null
        order by is_tiger desc) as roads
    </Parameter>
    &datasource-settings;
  </Datasource>
</Layer>
